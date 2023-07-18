/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:30:02 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/18 04:01:16 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::set( st n ) {
	name = n;
}

Zombie::Zombie(st name) {
	this->name = name;
}

Zombie::Zombie() {

}

Zombie::~Zombie() {
	std::cout << "Zombie : " << name << " Got Destroyed" << std::endl;	
}

void	Zombie::annonce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
