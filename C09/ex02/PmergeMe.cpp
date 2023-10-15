/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:40:38 by mnassi            #+#    #+#             */
/*   Updated: 2023/10/12 22:40:38 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {

}

PmergeMe::PmergeMe( const PmergeMe &obj ) {
	*this = obj;
}

PmergeMe &PmergeMe::operator=( const PmergeMe &obj ) {
	v_arr = obj.v_arr;
	_arr = obj._arr;
	_MainChain = obj._MainChain;
	_Pend = obj._Pend;
	Ford_N_ = obj.Ford_N_;
	_com = obj._com;
	return *this;
}

PmergeMe::~PmergeMe( void ) {
	
}

int	PmergeMe::fill_( _deque &v_arr, char **av ) {
	int i = 0;
	while (av[++i])
		v_arr.push_back(atoi(av[i]));
	return (i - 1);
}

void	PmergeMe::f_swap( _Pairdeque &_arr_de, int index ) {
	if (_arr_de[index].first > _arr_de[index].second)
		return ;
	int temp;
	temp = _arr_de[index].first;
	_arr_de[index].first = _arr_de[index].second;
	_arr_de[index].second = temp;
}

void	PmergeMe::first_pair( _Pairdeque &_arr_de, int size ) {
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

void	PmergeMe::split_pair( _Pairdeque v_arr, 
		_deque &f_arr, _deque &s_arr, int size ) {
	for (int i = 0; i < size ; i++) {
		f_arr.push_back(v_arr[i].first);
		s_arr.push_back(v_arr[i].second);
	}
	f_arr.insert(f_arr.begin(), v_arr[0].second);
}

bool	PmergeMe::theNumber_isFordNumber( int Number, _deque &ch_e ) {
	for (_deque::iterator it = ch_e.begin(); it < ch_e.end(); it++)
		if (*it == Number || Number <= 0)
			return false;
	return true;
}

_deque	PmergeMe::Ford_Johnson( _deque &v_arr ) {
	_deque comb;
	v_arr.push_back(0);
	v_arr.push_back(1);
	for (int index = 0; index < 15; index++) {
		int foJoh = v_arr[index] * 2 + v_arr[index + 1];
		v_arr.push_back( foJoh );
	}
	for (int index = 3; index < (int)v_arr.size() - 1; index++) {
		int take = v_arr[index];
		comb.push_back(take);
		take--;
		while (theNumber_isFordNumber(take, v_arr)) {
			comb.push_back(take);
			take--;
		}
	}
	return comb;
}

int	PmergeMe::binarySearch( _deque &first, int find ) {
	int left = 0;
	int right = first.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (first[mid] == find)
			return mid;
		else if (first[mid] < find)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return left;
}

void	PmergeMe::binary_search( _deque &first, _deque &sec, _deque comb_ ) {
	for (_deque::iterator it = comb_.begin(); it < comb_.end(); it++) {
		int	index = *it - 1;
		if (index < (int)sec.size()) {
			_deque::iterator position = binarySearch( first, sec[index] ) + first.begin();
			first.insert(position, sec[index]);
		}
	}
}

void	PmergeMe::begin_the_merge( _deque &v_arr, int size ) {
	int		index = 0;
	int		struggler = *(--v_arr.end());
	(void)struggler;
	if (size % 2 == 1)
		v_arr.pop_back();

	_Pairdeque _arr_de;

	_deque _arr_sec;
	_deque _arr_first;
	_deque Ford_nb;
	_deque comb_;

	for (_deque::iterator it = v_arr.begin(); it < v_arr.end(); it += 2) {
		_arr_de.push_back(std::make_pair(*it, *(it + 1)));
		f_swap( _arr_de, index );
		index++;
	}
	first_pair( _arr_de, index );
	split_pair( _arr_de ,_arr_first, _arr_sec, index );
	comb_ = Ford_Johnson(Ford_nb);
	binary_search( _arr_first, _arr_sec, comb_ );
	if (size % 2 != 0)
		_arr_first.insert(binarySearch( _arr_first, struggler ) + _arr_first.begin(), struggler);
}