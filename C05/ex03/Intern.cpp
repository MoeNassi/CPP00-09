/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:57:43 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/16 13:18:17 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Intern Default Constructor Called" << std::endl;
}

AForm	*Intern::makeForm( st_ type, st_ target ) {
	int		i = 0;
	AForm	*forms_ptr[3] = {new Shrubbery(target), new Robotomy(target), new Presidential(target)};
	st_	forms[3] = {"shrubbery request", "robotomy request", "presidential request"};
	while (i < 3 && forms[i] != type)
		i++;
	if (forms[i] != type)
		return (NULL);
	return (forms_ptr[i]);
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