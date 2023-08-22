/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:21:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/22 10:15:38 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	
}

ClapTrap::ClapTrap( ClapTrap *copy ) {
	*this = copy;
}

ClapTrap::ClapTrap( st_ &name ) {
	std::cout << YELLOW "Constructor Called" RESET << std::endl;
	this->name = name;
	Hit_Point = 10;
	Energy_Point = 10;
	Attack_Damage = 0;
}

void	ClapTrap::attack( const st_ &target ) {
	if (this->Energy_Point != 0) {
		std::cout << CYAN "ClapTrap " << this->name << RESET << " attacks " << CYAN << target << RESET << ", causing " << RED << this->Attack_Damage << " point of damage" RESET << std::endl;
		this->Energy_Point--;
		std::cout << BLUE "Energy left : " << this->Energy_Point << RESET << std::endl;
	}
	else
		std::cout << RED "Not Enough Energy Point" RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount >= 0) {
		std::cout << CYAN "ClapTrap " << this->name << RESET << " took " << RED << amount << " of the damage " RESET << std::endl;
		this->Hit_Point -= amount;
		std::cout << BLUE "HP Left : " << this->Hit_Point << RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->Energy_Point != 0) {
		this->Hit_Point = amount;
		this->Energy_Point--;
		std::cout << CYAN "ClapTrap " << this->name << RESET " Regen his HP to : " << GREEN << amount << " HP" << RESET << std::endl;
		std::cout << BLUE "Energy left : " << this->Energy_Point << RESET << std::endl;
	}
	else
		std::cout << RED "Not Enough Energy Point" RESET << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << YELLOW "Destructor Called" RESET << std::endl;
}