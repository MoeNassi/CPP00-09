/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:45:24 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/18 12:18:48 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int stock;
	static const int eight_bits;

public:
	Fixed(void);
	Fixed(Fixed &as_arg);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	~Fixed(void);

	Fixed &operator=(const Fixed &b);
};

#endif