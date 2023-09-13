/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:41:45 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/13 19:02:34 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

Robotomy::Robotomy( void ) : AForm("default", 72, 45) {
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

void	Robotomy::rando( void ) {
	int	n_ber = rand() % 100;
	if (n_ber % 2 == 0)
		std::cout << this->target << " has been robotomized " << std::endl;
	else
		std::cout << this->target << " robotomy failed " << std::endl;
}

void	Robotomy::run( void ) {

}

Robotomy::~Robotomy( void ) {
	std::cout << "Robotomy Destructor called" << std::endl;
}