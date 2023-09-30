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

int	Span::longestSpan() {
	if (_arr.size() <= 1)
		throw (full());
	std::sort(_arr.begin(), _arr.end() );
	int span = _arr[_arr.size() - 1] - _arr[0];
	return (span);
}

int	Span::shortestSpan() {
	if (_arr.size() <= 1)
		throw (full());
	std::sort(_arr.begin(), _arr.end() );
	int span = _arr[1] - _arr[0];
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
	if (_arr.size() > N)
		throw (full());
	_arr.push_back(add);
}

void Span::addNumbers( std::vector< int >::iterator begin, std::vector < int >::iterator end ) {
	int	distance = std::distance(begin, end);
	if ( distance + (int)_arr.size() > (int)N )
		throw (full());
	_arr.insert(_arr.end(), begin, end);
}

Span &Span::operator=( const Span &b ) {
	this->_arr = b._arr;
	this->N = b.N;
	return (*this);
}

Span::~Span( void ) {
	std::cout << "Destructor Called" << std::endl;
}