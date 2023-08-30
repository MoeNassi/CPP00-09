/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:45:09 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/30 14:07:07 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("pispisnaw") {
	std::cout << GREEN "WrongAnimal Default Constructor Called" RESET << std::endl;
}

WrongAnimal::WrongAnimal( st_ type ) {
	std::cout << GREEN "Constructor Called" RESET << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal( WrongAnimal *copy ) {
	std::cout << GREEN "Default Constructor Called" RESET << std::endl;
	*this = copy;
}

void	WrongAnimal::makeSound() const {
	std::cout << BLUE "Aaaaaaaghhhhhhh" RESET << std::endl;
}

st_		WrongAnimal::getType( void ) const {
	return (this->type);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Default Destructor Called" << std::endl;
}