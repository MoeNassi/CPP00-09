/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:40:03 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/02 13:22:50 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

cure::cure( void ) {
	std::cout << "Cure Default Constructor Called" << std::endl;
}

cure::cure(st_ const &type) {
	std::cout << "Constructor Called" << std::endl;
	this->type = type;
}

st_ const &cure::getType() const {
	return (type);
}

cure* cure::clone() const {
	cure *clone = new cure();
	return (clone);
}

void cure::use(ICharacter &target) {
	std::cout << "heals " << target << " wounds" << std::endl;
}