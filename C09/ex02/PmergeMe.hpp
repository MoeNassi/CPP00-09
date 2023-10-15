/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:40:30 by mnassi            #+#    #+#             */
/*   Updated: 2023/10/12 22:40:30 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <stdlib.h>
#include <ctime>
#include <sstream>

#define _deque std::deque < int >
#define _Pairdeque std::deque < std::pair < int, int > >
#define _vector std::vector < int >
#define _Pairvector std::vector < std::pair < int, int > >
class PmergeMe {
	public :
		_deque	v_arr;
		_Pairdeque _arr;
		_deque _MainChain;
		_deque _Pend;
		_deque _com;
		_deque Ford_N_;

		PmergeMe( void );
		PmergeMe( const PmergeMe &obj );
		PmergeMe &operator=( const PmergeMe &obj );
		~PmergeMe( void );
	void	begin_the_merge( _deque &v_arr, int size );
	void	binary_search( _deque &first, _deque &sec, _deque comb_ );
	int		binarySearch( _deque &first, int find );
	_deque	Ford_Johnson( _deque &v_arr );
	bool	theNumber_isFordNumber( int Number, _deque &ch_e );
	void	split_pair( _Pairdeque v_arr, 
				_deque &f_arr, _deque &s_arr, int size );
	void	first_pair( _Pairdeque &_arr_de, int size );
	void	f_swap( _Pairdeque &_arr_de, int index );
	int		fill_( _deque &v_arr, char **av );
};

#endif