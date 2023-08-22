/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:49:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/21 15:59:50 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point {
	private :
		Fixed const x;
		Fixed const y;
	public :
		Point( void );
		Point( float hori, float verti );
		Fixed operator=(const Fixed &b);
		~Point( void );
}

#endif

