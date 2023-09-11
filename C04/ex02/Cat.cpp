/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:44:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/08 16:54:38 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat &Cat::operator=(const Cat &b) {
	std::cout << RED "Cat Copy assignment operator called" RESET << std::endl;
	if (this != &b) {
		delete	idea;
		idea = new Brain(*b.idea);
		this->type = b.type;
	}
	return (*this);
}

Cat::Cat( void ) {
	std::cout << RED "Cat Default Constructor Called" RESET << std::endl;
	idea = new Brain();
	type = "Cat";
}

Cat::Cat( st_ set ) {
	std::cout << RED "Cat Default Constructor Called" RESET << std::endl;
	idea = new Brain();
	this->type = set;
}

Cat::Cat( const Cat &obj ) {
	std::cout << RED "Cat Copy Constructor Called" RESET << std::endl;
	idea = new Brain();
	*this = obj;
}

void	Cat::makeSound() const  {
	std::cout << "Cat " << this->type << BLUE " : Mgheeeeeeew 🐱🐱" RESET << std::endl;
}

Cat::~Cat() {
	std::cout << RED "Cat Destructor Called" RESET << std::endl;
	delete idea;
}