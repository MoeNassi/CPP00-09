/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:55:16 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/03 17:57:40 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

ice::ice( void ) {
	std::cout << BLUE "Ice Default Constructor Called" RESET << std::endl;
	this->type = "ice";
}

ice::ice(st_ const &type) {
	std::cout << BLUE "Constructor Called" RESET << std::endl;
	this->type = type;
}

st_ const &ice::getType() const {
	return (type);
}

ice* ice::clone() const {
	return (new ice());
}

void ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

ice::~ice( void ) {
	std::cout << RED "ice Destructor Called" RESET << std::endl;
}