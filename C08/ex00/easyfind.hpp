/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:49:57 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/27 14:00:46 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <array>

template < typename T >
int easyfind( T &arr, int find ) {
	int *index;
	if ((index = std::find(arr.begin(), arr.end(), find)) != arr.end())
		return *index;
	throw -1;
}

#endif