/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:01:33 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/26 15:31:18 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
  	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe;

	john.attack("zac");
	john.attack("james");
	john.attack("simo");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	joe.attack("mohammed");
}