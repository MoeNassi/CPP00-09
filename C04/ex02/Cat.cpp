/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:44:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/30 17:25:40 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat &Cat::operator=(const Cat &b) {
	std::cout << RED "Cat Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

Cat::Cat( void ) {
	std::cout << RED "Cat Default Constructor Called" RESET << std::endl;
	idea = new Brain();
	this->type = "Default";
}

Cat::Cat( st_ set ) {
	std::cout << RED "Cat Default Constructor Called" RESET << std::endl;
	idea = new Brain();
	this->type = set;
}

Cat::Cat( Cat *obj ) {
	std::cout << RED "Cat Copy Constructor Called" RESET << std::endl;
	*this = obj;
}

void	Cat::makeSound() const  {
	std::cout << "Cat " << this->type << BLUE " : Mgheeeeeeew 🐱🐱" RESET << std::endl;
}

Cat::~Cat() {
	std::cout << RED "Cat Destructor Called" RESET << std::endl;
	delete idea;
}