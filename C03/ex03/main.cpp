/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:47:30 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/24 01:52:07 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe;
	ScavTrap jane;
	FragTrap joseph;
	DiamondTrap	daniel;

	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	jane.attack("Lisa");
	jane.takeDamage(99);
	jane.beRepaired(50);
	jane.GuardGate();
	joseph.attack("Maggie");
	joseph.takeDamage(99);
	joseph.beRepaired(50);
	joseph.highFivesGuys();
	daniel.attack("Ned");
	daniel.takeDamage(5);
	daniel.beRepaired(3);
	daniel.GuardGate();
	daniel.highFivesGuys();
	daniel.whoAmI();
}