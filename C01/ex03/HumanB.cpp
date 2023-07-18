/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 06:04:40 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/18 05:30:16 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void	HumanB::setWeapon( Weapon weapon ) {
	this->weapon = weapon;
}

HumanB::HumanB( ) {

}

HumanB::HumanB( st_ nm ) {
	name = nm;
}

HumanB::~HumanB() {

}
