/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:21:25 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/24 18:48:56 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap( T &v1, T &v2 ) {
	T	temp = v1;
	v1 = v2;
	v2 = temp;
}

template <typename T>
T	min( T v1, T v2 ) {
	if (v1 < v2)
		return v1;
	return v2;
}

template <typename T>
T	max( T v1, T v2 ) {
	if (v1 > v2)
		return v1;
	return v2;
}

#endif