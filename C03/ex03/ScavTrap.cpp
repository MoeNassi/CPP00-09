/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:21:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/24 01:52:43 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("MedAitSwa") {
	std::cout << YELLOW "Default constructor Called" RESET << std::endl;
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_Damage = 20;
}

ScavTrap::ScavTrap( ScavTrap *copy ) {
	*this = copy;
}

ScavTrap::ScavTrap( st_ name ) {
	std::cout << YELLOW "Constructor Called" RESET << std::endl;
	this->name = name;
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_Damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << YELLOW "Destructor Called" RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->name = b.name;
	return (*this);
}

void ScavTrap::GuardGate( void ) {
	std::cout << CYAN "ScavTrap " << this->name << RESET " is in Gate keeper mode" << std::endl;
}