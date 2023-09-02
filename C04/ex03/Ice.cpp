/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:55:16 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/02 16:33:58 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

ice::ice( void ) {
	std::cout << "Ice Default Constructor Called" << std::endl;
	this->type = "Default";
}

ice::ice(st_ const &type) {
	std::cout << "Constructor Called" << std::endl;
	this->type = type;
}

st_ const &ice::getType() const {
	return (type);
}

ice* ice::clone() const {
	ice *clone = new ice();
	return (clone);
}

void ice::use(ICharacter &target) {
	std::cout << "heals " << target.getName() << " wounds" << std::endl;
}