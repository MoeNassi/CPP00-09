/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:45:24 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/22 16:19:23 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <ostream>

class Fixed {
private:
	int stock;
	static const int eight_bits;

public:
	Fixed( void );
	Fixed( Fixed const &ret_obj );
	Fixed( const int converter );
	Fixed( const float converter );

	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed &min(Fixed &first, Fixed &sec);
	static Fixed &max(Fixed &first, Fixed &sec);

	static const Fixed	&max(const Fixed &first, const Fixed &sec);
	static const Fixed	&min(const Fixed &first, const Fixed &sec);

	Fixed operator=(const Fixed &b);
	Fixed operator+(const Fixed &b);
	Fixed operator*(const Fixed &b);
	Fixed operator/(const Fixed &b);
	Fixed operator-(const Fixed &b);

	Fixed operator++(int);
	Fixed operator--(int);
	Fixed &operator++(void);
	Fixed &operator--(void);

	bool operator<(const Fixed &compare);
	bool operator>(const Fixed &compare);
	bool operator>=(const Fixed &rightnode);
	bool operator<=(const Fixed &rightnode);
	bool operator==(const Fixed &rightnode);
	bool operator!=(const Fixed &rightnode);

	~Fixed(void);
};

Fixed operator*(const Fixed &a, const Fixed &b);
std::ostream &operator<<(std::ostream& os, const Fixed& dt);

# endif