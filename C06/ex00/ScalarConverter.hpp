/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:58:36 by mnassi            #+#    #+#             */
/*   Updated: 2023/10/12 19:05:41 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"

#include <iostream>
#include <sstream>

#define st_ std::string

class	ScalarConverter {
	private :
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter &cpy);
		ScalarConverter &operator=(const ScalarConverter &b);
	public :
		static void	convert( st_ check );
		~ScalarConverter( void );
};

#endif