/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:58:29 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/21 16:50:42 by mnassi           ###   ########.fr       */
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

bool	isChar( st_ check) {
	if (check.length() == 1 && (check[0] >= 32 || check[0] <= 126))
		return (true);
	return (false);
}

int	isFloatOrDouble( st_ checker ) {
	int		i = -1;
	while (checker[i] && isdigit(checker[++i]));
	if (checker[i] == 'f' && isdigit(checker[i - 1]))
		return (-1);
	else if (!checker[i])
		return (1);
	return (0);
}

void	isInt( st_ checkIFloat ) {
	int		i = -1;
	while (checkIFloat[i] && (isdigit(checkIFloat[++i]) || checkIFloat[i] == '-'));
	if (checkIFloat[i] == '.' && checkIFloat[i + 1]) {
		i = isFloatOrDouble(&checkIFloat[i + 1]);
		if (i == -1)
			throw (1.2f);
		else if (i == 1)
			throw (1.2);
	}
	if (!checkIFloat[i])
		throw (1);
	else {
		if (isChar(checkIFloat))
			throw ('j');
	}
}

void	nonprintable( st_ check, st_ inf[7] ) {
	for (int i = 0; i < 7; i++) {
		if (!check.compare(inf[i])) {
			std::cout << "char : " << "impossible" << std::endl;
			std::cout << "int : " << "impossible" << std::endl;
			if (check[check.length() - 1] != 'f')
				std::cout << "float : " << check + 'f' << std::endl;
			else
				std::cout << "float : " << check << std::endl;
			if (check[check.length() - 1] != 'f')
				std::cout << "double : " << check << std::endl;
			else
				std::cout << "double : " << check.substr(0, check.length() - 1) << std::endl;
		}
	}
}

void	ScalarConverter::convert( st_ check ) {
	st_	inf[7] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	nonprintable(check, inf);
	const char *var = check.c_str();
	if (!(std::stringstream(check))) {
		std::cout << "overflow" << std::endl;
		return ;
	}
	try {
		isInt(check);
	}
	catch (int) {
		int i = atoi(var);
		char car = static_cast<char>(i);
		if (car < 32 || car > 126)
			std::cout << "Char : " << "Non displayable" << std::endl;
		else
			std::cout << "Char : " << car << std::endl;
		i = static_cast<int>(i);
		std::cout << "Int : " << i << std::endl;
		float let = static_cast<float>(i);
		std::cout << "Float : " << let << 'f' << std::endl;
		std::cout << "Double : " << let << std::endl;
	}
	catch (double) {
		float let = atof(var);
		char car = static_cast<char>(let);
		if (car < 32 || car > 126)
			std::cout << "Char : " << "Non displayable" << std::endl;
		else
			std::cout << "Char : " << car << std::endl;
		int i = static_cast<int>(let);
		std::cout << "Int : " << i << std::endl;
		let = static_cast<float>(let);
		std::cout << "Float : " << let << 'f' << std::endl;
		std::cout << "Double : " << let << std::endl;
	}
	catch (float) {
		float let = atof(var);
		char car = static_cast<char>(let);
		if (car < 32 || car > 126)
			std::cout << "Char : " << "Non displayable" << std::endl;
		else
			std::cout << "Char : " << car << std::endl;
		int i = static_cast<int>(let);
		std::cout << "Int : " << i << std::endl;
		let = static_cast<float>(let);
		std::cout << "Float : " << let << 'f' << std::endl;
		std::cout << "Double : " << let << std::endl;
	}
	catch (char) {
		char car = var[0];
		if (car < 32 || car > 126)
			std::cout << "Char : " << "Non displayable" << std::endl;
		else
			std::cout << "Char : " << car << std::endl;
		int i = static_cast<int>(car);
		std::cout << "Int : " << i << std::endl;
		float let = static_cast<float>(car);
		std::cout << "Float : " << let << 'f' << std::endl;
		std::cout << "Double : " << let << std::endl;
	}
}

ScalarConverter::~ScalarConverter( void ) {
	std::cout << "ScalarConverter Destructor Called" << std::endl;	
}