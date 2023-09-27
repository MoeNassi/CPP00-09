/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:13:04 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/27 17:10:35 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) {
	std::cout << "Default Constructor" << std::endl;
	_arr.reserve(0);
	N = 0;
}

Span::Span( unsigned int N_ ) {
	std::cout << "Paramitrized Constructor" << std::endl;
	N = N_;
	_arr.reserve(N);
}

Span::Span( const Span &cpy ) {
	std::cout << "Copy Constructor" << std::endl;
	*this = cpy;
}

const char *Span::full::what() const throw() {
	return ( "Error" );
}

void	swap( int &v1, int &v2 ) {
	int	temp = v1;
	v1 = v2;
	v2 = temp;
}

int	min( int v1, int v2 ) {
	if (v1 < v2)
		return v1;
	return v2;
}

int	max( int v1, int v2 ) {
	if (v1 > v2)
		return v1;
	return v2;
}

int	Span::longestSpan() {
	if (_arr.size() == 0)
		throw (full());
	for (int j = 0; j < (int)_arr.size() - 1; j++) {
		bool didItSwap = false;
		for (int i = 0; i < (int)_arr.size() - j - 1; i++) {
			if (::min( _arr[i], _arr[i + 1]) == _arr[i + 1]) {
				::swap( _arr[i], _arr[i + 1] );
				didItSwap = true;
			}
		}
		if (!didItSwap)
			break ;
	}
	int span = _arr[_arr.size() - 1] - _arr[0];
	return (span);
}

int	Span::shortestSpan() {
	if (_arr.size() == 0)
		throw (full());
	for (int j = 0; j < (int)_arr.size(); j++) {
		bool didItSwap = false;
		for (int i = 0; i < (int)_arr.size() - j - 1; i++) {
			if (::min( _arr[i], _arr[i + 1]) == _arr[i + 1]) {
				::swap( _arr[i], _arr[i + 1] );
				didItSwap = true;
			}
		}
		if (!didItSwap)
			break ;
	}
	int span = 2147483647;
	for (int i = 0; i < (int)_arr.size(); i++) {
		if (_arr[i + 1] - _arr[i] < span && _arr[i + 1] - _arr[i] > 0) {
			span = _arr[i + 1] - _arr[i];
		}
	}
	return (span);
}

void Span::get_nB( void ) {
	for (int i = 0; i < (int)_arr.size(); i++)
		std::cout << _arr[i] << std::endl;
}

void Span::addNumber( int add ) {
	if (_arr.size() >= N)
		throw (full());
	_arr.push_back(add);
}

Span &Span::operator=( const Span &b ) {
	this->_arr = b._arr;
	this->N = b.N;
	return (*this);
}

Span::~Span( void ) {
	std::cout << "Destructor Called" << std::endl;
}