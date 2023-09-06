/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:55:16 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 16:10:35 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	std::cout << BLUE "Ice Default Constructor Called" RESET << std::endl;
	this->type = "Ice";
}

Ice::Ice( Ice &copy ) {
	std::cout << BLUE "Ice copy Constructor Called" RESET << std::endl;
	this->type = copy.type;
}

Ice::Ice(st_ const &type) {
	std::cout << BLUE "Ice Constructor Called" RESET << std::endl;
	this->type = type;
}

st_ const &Ice::getType() const {
	return (type);
}

AMateria* Ice::clone() const {
	return (new Ice());
}

Ice &Ice::operator=(const Ice &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice( void ) {
	std::cout << RED "Ice Destructor Called" RESET << std::endl;
}