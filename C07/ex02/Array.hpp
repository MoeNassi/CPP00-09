/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:02:24 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/26 16:31:29 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#define st_ std::string

template<typename T>
class Array {
	private :
		T*				array;
		unsigned int	ret_sz;
	public :
		Array() {
			std::cout << "Default Constructor Called" << std::endl;
			ret_sz = 0;
			array = new T[0];
		}
		Array( unsigned int n ) {
			std::cout << "Paramitrized Constructor Called" << std::endl;
			ret_sz = n;
			array = new	T[n];
		}
		Array( const Array &cpy ) {
			std::cout << "Copy Constructor Called" << std::endl;
			*this = cpy;
		}
		Array	&operator=( const Array &b ) {
			std::cout << "Copy assignement operator Called" << std::endl;
			this->array = b.array;
			this->ret_sz = b.ret_sz;
			return (*this);
		}
		unsigned int	size( void ) {
			return (ret_sz);
		}
		class Above : public std::exception {
			public :
				const char *what() const throw(){
					return ("Error the index is greater than the size");
				}
		};
		T& operator[]( unsigned int i ) {
			if (i >= ret_sz)
				throw (Above());
			return (array[i]);
		}
		const T &operator[]( unsigned int i ) const {
			if (i >= ret_sz)
				throw (Above());
			return (array[i]);
		}
		~Array() {
			std::cout << "Destructor Called" << std::endl;
			delete[] array;
		}
		
};

#endif