/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:21:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/22 10:14:44 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	
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

void ScavTrap::GuardGate( void ) {
	std::cout << CYAN "ScavTrap " << this->name << RESET " is in Gate keeper mode" << std::endl;
}