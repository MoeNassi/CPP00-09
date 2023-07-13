/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:16:53 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/12 17:47:26 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( st name ) {
	this->name = name;
}
Zombie::Zombie() {
	
}
Zombie::~Zombie() {
	std::cout << this->name << " Got Destroyed" << std::endl;
}

int main() {
	Zombie	*ptr;
	Zombie	s;

	ptr = newZombie("Hamid");
	ptr->announce();
	delete ptr;
}