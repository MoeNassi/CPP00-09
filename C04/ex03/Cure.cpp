/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:40:03 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/03 17:57:51 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

cure::cure( void ) {
	std::cout << CYAN "Cure Default Constructor Called" RESET << std::endl;
	type = "cure";
}

cure::cure(st_ const &type) {
	std::cout << CYAN "Constructor Called" RESET << std::endl;
	this->type = type;
}

st_ const &cure::getType() const {
	return (type);
}

cure* cure::clone() const {
	return (new cure());
}

void cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

cure::~cure() {
	std::cout << RED "cure Destructor Called" RESET << std::endl;
}