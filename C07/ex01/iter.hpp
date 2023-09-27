/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:45:26 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/25 14:45:26 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename Func>
void iter( T *array, size_t size, Func function) {
	for (size_t i = 0; i < size ; i++)
		function(array[i]);
}

template<typename T>
void printarray( const T &nb_) {
	std::cout << nb_ << std::endl;
}

#endif