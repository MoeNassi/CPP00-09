/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:57:43 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/19 11:37:07 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern &Intern::operator=(const Intern &b) {
	std::cout << "Intern Copy assignment operator called" << std::endl;
	if (this != &b)
		this->target = b.target;
	return (*this);
}

AForm	*Intern::makeForm( st_ type, st_ target ) {
	int		i = 0;
	st_	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	while (i < 3 && forms[i] != type)
		i++;
	switch (i) {
		case 0 :
			return (new Shrubbery(target));
		case 1 :
			return (new Robotomy(target));
		case 2 :
			return (new Presidential(target));
			break ;
		default :
			std::cout << RED << "form name not found" << RESET_COLOR << std::endl;
			throw (-1);
	}
	return (NULL);
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