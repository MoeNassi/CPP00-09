/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:57:43 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/14 17:04:11 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::Intern( st_ target_ ) : target(target_) {
	std::cout << "Intern Parametrized Constructor Called" << std::endl;
}

Intern::Intern( const Intern &cpy ) {
	std::cout << "Intern copy Constructor Called" << std::endl;
	*this = cpy;
}

Intern::~Intern( void ) {
	std::cout << "Intern Destructor Called" << std::endl;
}