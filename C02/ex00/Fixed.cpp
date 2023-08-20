/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:48:11 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/18 12:18:56 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::eight_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	stock = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
	stock = 0;
}

Fixed::Fixed(Fixed &as_arg)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = as_arg;
}

Fixed &Fixed::operator=(const Fixed &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->stock = b.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (stock);
}

void Fixed::setRawBits(int const raw)
{
	this->stock = raw;
}