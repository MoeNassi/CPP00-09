/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:12:25 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/30 12:43:40 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>


class Span {
	private :
		std::vector < int > _arr;
		unsigned int N;
	public :
		Span( void );
		Span( unsigned int N_ );
		Span( const Span &cpy );
		void addNumber( int add );
		int longestSpan();
		int shortestSpan();
		void get_nB( void );
		void addNumbers( std::vector< int >::iterator begin, std::vector < int >::iterator end );
		class full : public std::exception {
			public :
				const char *what() const throw();
		};
		Span &operator=( const Span &b );
		~Span( void );
};

int	max( int v1, int v2 );

void	swap( int &v1, int &v2 );

int	min( int v1, int v2 );

#endif