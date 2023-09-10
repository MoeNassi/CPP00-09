/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:08:22 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/08 16:39:38 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
	std::cout << GREEN "Character Constructor Called" RESET << std::endl;	
	this->name = "hh";
	for (int i = 0; i < 4 ; i++)
		this->slots[i] = NULL;
}

Character::Character( st_ type ) {
	std::cout << GREEN "Character Constructor Called" RESET << std::endl;
	for (int i = 0; i < 4 ; i++)
		this->slots[i] = NULL;
	this->name = type;
}

Character::Character( Character &copy ) : name(copy.name) {
	std::cout << GREEN "Character copy constructor called" RESET << std::endl;
	for (int i = 0; i < 4 ; i++)
		this->slots[i] = copy.slots[i]->clone();
}

Character &Character::operator=(const Character &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b) {
		for (int i = 0; i < 4; i++)
		{
			if (b.slots[i] != NULL)
				slots[i] = b.slots[i]->clone();
		}
	}
	return (*this);
}

st_ const &Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	
	for (int i = 0; i < 4; i++) {
		if (slots[i] == NULL) {
			slots[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {	
	if (idx >= 0 && idx < 4 && slots[idx])
		slots[idx]->use(target);
}

Character::~Character() {
	std::cout << "Character Destructor Called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] != NULL)
			delete slots[i];
	}
}