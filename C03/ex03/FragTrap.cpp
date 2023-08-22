/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:21:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/22 13:56:16 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	
}

FragTrap::FragTrap( FragTrap *copy ) {
	*this = copy;
}

FragTrap::FragTrap( st_ name ) {
	std::cout << YELLOW "Constructor Called" RESET << std::endl;
	this->name = name;
	this->Hit_Point = 100;
	this->Energy_Point = 100;
	this->Attack_Damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << YELLOW "Destructor Called" RESET << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << CYAN "FragTrap " << this->name << RESET " wants to high five everyone" << std::endl;
}