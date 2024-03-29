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

int	fill_( _vector &v_arr, char **av ) {
	int i = 0;
	while (av[++i])
		v_arr.push_back(atoi(av[i]));
	return (i - 1);
}

void	f_swap( _Pairvector &_arr_de, int index ) {
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
		_vector &f_arr, _vector &s_arr, int size ) {
	for (int i = 0; i < size ; i++) {
		f_arr.push_back(v_arr[i].first);
		s_arr.push_back(v_arr[i].second);
	}
	f_arr.insert(f_arr.begin(), v_arr[0].second);
}

bool	theNumber_isFordNumber( int Number, _vector &ch_e ) {
	for (_vector::iterator it = ch_e.begin(); it < ch_e.end(); it++)
		if (*it == Number || Number <= 0)
			return false;
	return true;
}

_vector	Ford_Johnson( _vector &v_arr ) {
	_vector comb;
	v_arr.reserve(15);
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

int	binarySearch( _vector &first, int find ) {
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

void	binary_search( _vector &first, _vector &sec, _vector comb_ ) {
	for (_vector::iterator it = comb_.begin(); it < comb_.end(); it++) {
		int	index = *it - 1;
		if (index < (int)sec.size()) {
			_vector::iterator position = binarySearch( first, sec[index] ) + first.begin();
			first.insert(position, sec[index]);
		}
	}
}

void	begin_the_merge( _vector &v_arr, int size ) {
	int		index = 0;
	int		struggler = *(--v_arr.end());
	(void)struggler;
	if (size % 2 == 1)
		v_arr.pop_back();

	_Pairvector _arr_de;

	_vector _arr_sec;
	_vector _arr_first;
	_vector Ford_nb;
	_vector comb_;

	for (_vector::iterator it = v_arr.begin(); it < v_arr.end(); it += 2) {
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
	std::cout << "after :  ";
	for (_vector::iterator it = _arr_first.begin(); it < _arr_first.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int main(int ac, char **av) {
	PmergeMe	deque_;
	clock_t	start,stop;
	clock_t	start_,stop_;
	_vector v_arr;
	int	size_ve = 0;
	int	size_de = 0;

	if (ac == 1)
		return std::cout << "Error : Perhaps u need more arguments" << std::endl, 0;
	if (!is_negative(av))
		return std::cout << "Error : Number" << std::endl, 0;
	size_ve = fill_(v_arr, av);
	size_de = deque_.fill_(deque_.v_arr, av);
	std::cout << "before : ";
	for (_vector::iterator it = v_arr.begin(); it < v_arr.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	start = clock();
	begin_the_merge(v_arr, size_ve);
	stop = clock();
	start_ = clock();
	deque_.begin_the_merge(deque_.v_arr, size_de);
	stop_ = clock();
	double duration = ((double)(stop - start) / CLOCKS_PER_SEC);
	double duration_ = ((double)(stop_ - start_) / CLOCKS_PER_SEC);
	std::cout << duration << " us" << std::endl;
	std::cout << duration_ << " us" << std::endl;
}