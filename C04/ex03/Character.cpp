/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:08:22 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/02 18:18:32 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
	std::cout << "Character Constructor Called" << std::endl;	
	for (int i = 0; i < 4 ; i++)
		this->slots[i] = NULL;
	this->name = "hh";
}

Character::Character( st_ type ) {
	std::cout << "Character Constructor Called" << std::endl;	
	this->name = type;
}

Character::Character( Character *copy ) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = copy;
}

Character &Character::operator=(const Character &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b) {
		for (int i = 0; i < 4 ; i++)
			this->slots[i] = b.slots[i];
	}
	return (*this);
}

st_ const &Character::getName() const {
	return (slots[0]->getType());
}

void Character::equip(AMateria* m) {
	for (int i = 0; slots[i] == NULL; i++) {
		slots[i] = m;
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
}