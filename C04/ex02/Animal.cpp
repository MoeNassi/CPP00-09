/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:00:05 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/02 13:17:55 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal &Animal::operator=(const Animal &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

Animal::Animal( void ) : type("Default"){
	std::cout << RED "Default Constructor Called" RESET << std::endl;
}

Animal::Animal( st_ set ) : type(set) {
	std::cout << RED "Default Constructor Called" RESET << std::endl;
}

Animal::~Animal() {
	std::cout << RED "Destructor Called" RESET << std::endl;
}

st_		Animal::getType( void ) const {
	return (this->type);
}

