/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:41:45 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/14 16:44:41 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

Robotomy::Robotomy( void ) : AForm("default", 72, 45), target("Default") {
	std::cout << "Robotomy Default Constructor Called" << std::endl;
}

Robotomy::Robotomy( st_ target_ ) : AForm(target_, 72, 45), target(target_) {
	std::cout << "Robotomy Constructor Called" << std::endl;
}

Robotomy::Robotomy( const Robotomy &cpy ) {
	std::cout << "Robotomy copy Constructor called" << std::endl;
	*this = cpy;
}

Robotomy &Robotomy::operator=(const Robotomy &b) {
	std::cout << "Robotomy Copy assignment operator called" << std::endl;
	(void)b;
	return (*this);
}

void	Robotomy::execute( Bureaucrat const &executor ) const {
	if (!get_sign() && executor.get_grade() > get_grade())
		throw(GradeTooLowException());
	srand(time(0));
	if ((rand()) % 2 == 0)
		std::cout << this->target << " has been robotomized " << std::endl;
	else
		std::cout << this->target << " robotomy failed " << std::endl;
}

Robotomy::~Robotomy( void ) {
	std::cout << "Robotomy Destructor called" << std::endl;
}