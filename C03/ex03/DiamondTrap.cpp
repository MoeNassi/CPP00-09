/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:03:42 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/24 01:51:42 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("MedAitSwa_clap_name") {
	std::cout << YELLOW "Default constructor Called" RESET << std::endl;
	this->FragTrap::Hit_Point = 100;
	this->FragTrap::Energy_Point = 50;
	this->FragTrap::Attack_Damage = 30;
}

DiamondTrap::DiamondTrap( st_ name ) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	std::cout << YELLOW "Constructor Called" RESET << std::endl;
	this->FragTrap::Hit_Point = 100;
	this->FragTrap::Energy_Point = 50;
	this->FragTrap::Attack_Damage = 30;
}

DiamondTrap::DiamondTrap( DiamondTrap *copy ) {
	*this = copy;
}

void DiamondTrap::whoAmI() {
	std::cout << "I'm DiamondTrap : " RED << this->ClapTrap::name << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->name = b.name;
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << YELLOW "Destructor Called" RESET << std::endl;
}