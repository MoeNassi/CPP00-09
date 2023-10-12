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

void	f_swap() {
	
}

void	begin_the_merge( std::vector < int > &v_arr, int size ) {
	int		index = 1;
	std::deque < int > arr_de(v_arr.begin(), v_arr.end());
	if (size % 2 == 1)
		int struggler = v_arr.end();
	for (std::vector < int >::iterator it = v_arr.begin(); it < v_arr.end(); it++) {
		arr_de.push_back(it);
		index++;
		if (index % 2 == 0)
			f_swap(arr_de);
	}
}

int main(int ac, char **av) {
	std::vector < int > v_arr;
	int	size_ve = 0;

	if (ac == 1)
		return std::cout << "Error : Perhaps u need more arguments" << std::endl, 0;
	if (!is_negative(av))
		return std::cout << "Error : Number" << std::endl, 0;
	size_ve = fill_(v_arr, av);
	begin_the_merge(arr_de, size_ve);
}