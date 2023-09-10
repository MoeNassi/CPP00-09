/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:01:33 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/27 18:01:08 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("hoe");
	FragTrap johny;
	
	john.attack(NULL);
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	johny.attack("zb");
	johny.highFivesGuys();
}