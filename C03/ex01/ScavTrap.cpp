/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:21:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/26 11:57:24 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << YELLOW "this is Default Constructor" RESET << std::endl;
	this->name = "MedAitSwa";
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_Damage = 20;
}

ScavTrap::ScavTrap( ScavTrap *copy ) {
	*this = copy;
}

ScavTrap::ScavTrap( st_ name ) {
	std::cout << YELLOW "This is Constructor" RESET << std::endl;
	this->name = name;
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_Damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << YELLOW "this is Destructor" RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->name = b.name;
	return (*this);
}

void	ScavTrap::attack( const st_ &target ) {
	if (this->Energy_Point != 0 && this->Hit_Point > 0) {
		std::cout << CYAN "ScavTrap " << this->name << RESET << " attacked " << CYAN << target << RESET << " dealing " << RED << this->Attack_Damage << " point of damage" RESET << std::endl;
		this->Energy_Point--;
		std::cout << BLUE "Energy points : " << this->Energy_Point << RESET << std::endl;
	}
	else if (this->Energy_Point == 0)
		std::cout << RED " Not enough Energy Point" RESET << std::endl;
	else if (this->Hit_Point == 0)
		std::cout << RED "ScavTrap " << this->name << " is dead" RESET << std::endl;
}

void ScavTrap::GuardGate( void ) {
	std::cout << CYAN "ScavTrap " << this->name << RESET " is in Gate keeper mode" << std::endl;
}