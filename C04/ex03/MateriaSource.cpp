/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:38:30 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/03 14:08:06 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << "MateriaSource Default Constructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		slots[i] = NULL;
	}
}

void	MateriaSource::learnMateria(AMateria *copy) {
	if (copy == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		if (slots[i] == NULL){
			slots[i] = copy;
			break;
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

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource Destructor Called" << std::endl;
}