/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:40:03 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/08 16:19:42 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {
	std::cout << CYAN "Cure Default Constructor Called" RESET << std::endl;
	type = "cure";
}

Cure::Cure( Cure &copy ) {
	std::cout << CYAN "Cure copy Constructor Called" RESET << std::endl;
	this->type = copy.type;
}

Cure::Cure(st_ const &type) {
	std::cout << CYAN "cure Constructor Called" RESET << std::endl;
	this->type = type;
}

st_ const &Cure::getType() const {
	return (type);
}

AMateria* Cure::clone() const {
	return (new Cure());
}

Cure &Cure::operator=(const Cure &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

Cure::~Cure() {
	std::cout << RED "Cure Destructor Called" RESET << std::endl;
}