/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:58:29 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/19 18:57:10 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {
	std::cout << "ScalarConverter Default Constructor Called" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter &cpy ) {
	std::cout << "ScalarConverter Copy Constructor Called" << std::endl;
	*this = cpy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &b) {
	std::cout << RED "ScalarConverter Copy assignment operator called" RESET << std::endl;
	(void)b;
	return (*this);
}

int	isFloatOrDouble( st_ checker ) {
	int		i = -1;
	while (checker[i] && isdigit(checker[++i]));
	if (checker[i] == 'f')
		return (-1);
	else if (!checker[i])
		return (1);
	return (0);
}

void	isInt( st_ checkIFloat ) {
	int		i = -1;
	while (checkIFloat[i] && isdigit(checkIFloat[++i]));
	if (checkIFloat[i] == '.') {
		i = isFloatOrDouble(&checkIFloat[i + 1]);
		if (i == -1)
			throw (1.2f);
		else if (i == 1)
			throw (1.2);
	}
	if (!checkIFloat[i])
		throw (1);
}

void	ScalarConverter::convert( st_ check ) {
	try {
		isInt(check);
	}
	catch (int) {
		std::cout << "is Int" << std::endl;
	}
	catch (double) {
		std::cout << "is Double" << std::endl;
	}
	catch (float) {
		std::cout << "is Float" << std::endl;
	}
}

ScalarConverter::~ScalarConverter( void ) {
	std::cout << "ScalarConverter Destructor Called" << std::endl;	
}