/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:03:32 by mnassi            #+#    #+#             */
/*   Updated: 2023/10/12 23:03:32 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	is_negative( char **ch ) {
	for (int i = 1 ; ch[i]; i++)
		for (int j = 0 ; ch[i][j]; j++)
			if (!isdigit(ch[i][j]))
				return false;
	return true;
}

int	fill_( std::vector < int > &v_arr, char **av ) {
	int i = 0;
	while (av[++i])
		v_arr.push_back(atoi(av[i]));
	return (i - 1);
}

void	f_swap( std::deque < std::pair < int, int > > &_arr_de, int index ) {
	if (_arr_de[index].first > _arr_de[index].second)
		return ;
	int temp;
	temp = _arr_de[index].first;
	_arr_de[index].first = _arr_de[index].second;
	_arr_de[index].second = temp;
}

void	first_pair( std::deque < std::pair< int, int > > &_arr_de, int size ) {
	for (int index = 0; index < size && index + 1 != size ; index++) {
		if (_arr_de[index].first < _arr_de[index + 1].first)
			break ;
		int temp = _arr_de[index].first;
		_arr_de[index].first = _arr_de[index + 1].first;
		_arr_de[index + 1].first = temp;
	}
}

void	begin_the_merge( std::vector < int > &v_arr, int size ) {
	int		index = 0;
	(void)size;
	std::deque < std::pair< int, int > > _arr_de;
	for (std::vector < int >::iterator it = v_arr.begin(); it < v_arr.end(); it += 2) {
		_arr_de.push_back(std::make_pair(*it, *(it + 1)));
		f_swap( _arr_de, index );
		index++;
	}
	first_pair( _arr_de, index );
	std::cout << "after : ";
	for (int i = 0; i < index ; i++) {
		std::cout << _arr_de[i].first << " " << _arr_de[i].second << " ";
	}
	std::cout << std::endl;
}

int main(int ac, char **av) {
	std::vector < int > v_arr;
	int	size_ve = 0;

	if (ac == 1)
		return std::cout << "Error : Perhaps u need more arguments" << std::endl, 0;
	if (!is_negative(av))
		return std::cout << "Error : Number" << std::endl, 0;
	size_ve = fill_(v_arr, av);
	std::cout << "before : ";
	for (std::vector < int >::iterator it = v_arr.begin(); it < v_arr.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	begin_the_merge(v_arr, size_ve);
}