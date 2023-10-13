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
	int st;
	for (int i = 1 ; ch[i]; i++) {
		std::stringstream	ss(ch[i]);
		if (!(ss >> st))
			return false;
		for (int j = 0 ; ch[i][j]; j++)
			if (!isdigit(ch[i][j]))
				return false;
	}
	return true;
}

int	fill_( std::vector < int > &v_arr, char **av ) {
	int i = 0;
	while (av[++i])
		v_arr.push_back(atoi(av[i]));
	return (i - 1);
}

void	f_swap( std::vector < std::pair < int, int > > &_arr_de, int index ) {
	if (_arr_de[index].first > _arr_de[index].second)
		return ;
	int temp;
	temp = _arr_de[index].first;
	_arr_de[index].first = _arr_de[index].second;
	_arr_de[index].second = temp;
}

void	first_pair( std::vector < std::pair< int, int > > &_arr_de, int size ) {
	for (int index = 0; index < size ; index++) {
		for (int j = 0; j < size ; j++) {
			if (_arr_de[index].first < _arr_de[j].first) {
				int key = _arr_de[index].first;
				int value = _arr_de[index].second;
				_arr_de[index].first = _arr_de[j].first;
				_arr_de[index].second = _arr_de[j].second;
				_arr_de[j].first = key;
				_arr_de[j].second = value;
			}
		}
	}
}

void	split_pair( std::vector < std::pair< int, int > > v_arr, 
		std::vector < int > &f_arr, std::vector < int > &s_arr, int size ) {
	for (int i = 0; i < size ; i++) {
		f_arr.push_back(v_arr[i].first);
	}
	for (int i = 0; i < size ; i++) {
		s_arr.push_back(v_arr[i].second);
	}
}

void	begin_the_merge( std::vector < int > &v_arr, int size ) {
	int		index = 0;
	int		struggler = *(--v_arr.end());
	(void)struggler;
	if (size % 2 == 1)
		v_arr.pop_back();

	std::vector < std::pair< int, int > > _arr_de;

	std::vector < int > _arr_first;
	std::vector < int > _arr_sec;

	for (std::vector < int >::iterator it = v_arr.begin(); it < v_arr.end(); it += 2) {
		_arr_de.push_back(std::make_pair(*it, *(it + 1)));
		f_swap( _arr_de, index );
		index++;
	}
	first_pair( _arr_de, index );
	split_pair( _arr_de ,_arr_first, _arr_sec, index );
	std::cout << "after : ";
	for (int i = 0; i < index ; i++)
		std::cout << _arr_de[i].first << " " << _arr_de[i].second << " ";
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