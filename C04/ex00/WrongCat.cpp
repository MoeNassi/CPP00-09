/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:45:05 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 16:26:44 by mnassi           ###   ########.fr       */
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

WrongCat::WrongCat( const WrongCat &copy ) {
	std::cout << GREEN "WrongCat Default Constructor Called" RESET << std::endl;
	this->type = copy.type;
}

void	WrongCat::makeSound() const  {
	std::cout << "WrongCat " << this->type << BLUE " : WAAAAAAAAAAAAAA" RESET << std::endl;
}

st_		WrongCat::getType( void ) const {
	return (this->type);
}

WrongCat &WrongCat::operator=(const WrongCat &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b)
		this->type = b.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Default Destructor Called" << std::endl;
}