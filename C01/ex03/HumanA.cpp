/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 06:04:46 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/18 05:08:58 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA( st_ nm, Weapon &weapon ) : name(nm), weapon(weapon) {
}

HumanA::~HumanA() {
}