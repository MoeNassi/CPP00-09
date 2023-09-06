/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:33:06 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 13:48:22 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : type("Default") {
	std::cout << RED "Default Constructor Called" RESET << std::endl;
}

AMateria::AMateria(st_ const &type) {
	std::cout << RED "Constructor Called" RESET << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria &copy) {
	std::cout << RED "Constructor Called" RESET << std::endl;
	this->type = copy.type;
}

st_ const &AMateria::getType() const {
	return (type);
}

AMateria &AMateria::operator=(const AMateria &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, const ICharacter& dt) {
	os << dt.getName();
	return (os);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Nothing " << target << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "Character Destructor Called" << std::endl;
}