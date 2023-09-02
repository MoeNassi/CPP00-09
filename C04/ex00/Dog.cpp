/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:44:13 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/29 18:33:43 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog &Dog::operator=(const Dog &b) {
	std::cout << RED "Dog Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

Dog::Dog( void ) {
	std::cout << RED "Dog Default Constructor Called" RESET << std::endl;
}

Dog::Dog( st_ type ) {
	std::cout << RED "Dog Default Constructor Called" RESET << std::endl;
	this->type = type;
}

Dog::Dog( Dog *obj ) {
	std::cout << RED "Dog Copy Constructor Called" RESET << std::endl;
	*this = obj;
}

void	Dog::makeSound() const {
	std::cout << "Dog " << this->type << BLUE " : Simp Simp 🐶🐶" RESET << std::endl;
}

Dog::~Dog() {
	std::cout << RED "Dog Destructor Called" RESET << std::endl;
}