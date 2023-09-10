/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:21:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/26 20:25:09 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("MedAitSwa") {
	std::cout << YELLOW "FragTrap Default constructor Called" RESET << std::endl;
	this->Hit_Point = 100;
	this->Energy_Point = 100;
	this->Attack_Damage = 30;
}

FragTrap::FragTrap( FragTrap *copy ) {
	*this = copy;
}

FragTrap::FragTrap( st_ name ) {
	std::cout << YELLOW "FragTrap Constructor Called" RESET << std::endl;
	this->name = name;
	this->Hit_Point = 100;
	this->Energy_Point = 100;
	this->Attack_Damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << YELLOW "Destructor Called" RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->name = b.name;
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << CYAN "FragTrap " << this->name << RESET " wants to high five everyone" << std::endl;
}