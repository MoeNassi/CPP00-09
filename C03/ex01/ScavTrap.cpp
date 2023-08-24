/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:21:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/24 02:13:20 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << YELLOW "Default Constructor Called" RESET << std::endl;
	this->name = "MedAitSwa";
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

void ScavTrap::attack( const st_ &target ) {
	if (this->Energy_Point != 0) {
		std::cout << CYAN "ScavTrap " << this->name << RESET << " attacked " << CYAN << target << RESET << ", dealing " << RED << this->Attack_Damage << " point of damage" RESET << std::endl;
		this->Energy_Point--;
		std::cout << BLUE "Energy left : " << this->Energy_Point << RESET << std::endl;
	}
	else
		std::cout << RED "Not Enough Energy Point" RESET << std::endl;
}

void ScavTrap::GuardGate( void ) {
	std::cout << CYAN "ScavTrap " << this->name << RESET " is in Gate keeper mode" << std::endl;
}