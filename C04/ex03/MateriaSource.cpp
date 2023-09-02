/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:38:30 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/02 17:59:11 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void	MateriaSource::learnMateria(AMateria *copy) {
	if (copy == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		slots[i] = copy;
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
	std::cout << "MateriaSource Default Constructor Called" << std::endl;
}