/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:38:30 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 16:14:43 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << RED "MateriaSource Default Constructor" RESET << std::endl;
	for (int i = 0; i < 4; i++) {
		slots[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource &copy ) {
	std::cout << RED "MateriaSource Default Constructor" RESET << std::endl;
	for (int i = 0; i < 4; i++) {
		slots[i] = copy.slots[i];
	}
}

void	MateriaSource::learnMateria(AMateria *copy) {
	if (copy == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		if (slots[i] == NULL) {
			slots[i] = copy;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (slots[i] && slots[i]->getType() == type)
			return (slots[i]->clone());
	}
	return (NULL);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &b) {
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

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource Destructor Called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] != NULL)
			delete slots[i];
	}
}