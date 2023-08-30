/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:45:05 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/30 14:07:32 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << GREEN "WrongCat Default Constructor Called" RESET << std::endl;
	this->type = "pispisnaw";
}

WrongCat::WrongCat( st_ type ) {
	std::cout << GREEN "WrongCat Constructor Called" RESET << std::endl;
	this->type = type;
}

WrongCat::WrongCat( WrongCat *copy ) {
	std::cout << GREEN "WrongCat Default Constructor Called" RESET << std::endl;
	*this = copy;
}

void	WrongCat::makeSound() const  {
	std::cout << "WrongCat " << this->type << BLUE " : Mgheeeeeeew 🐱🐱" RESET << std::endl;
}

st_		WrongCat::getType( void ) const {
	return (this->type);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Default Destructor Called" << std::endl;
}