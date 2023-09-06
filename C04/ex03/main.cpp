/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:40:18 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 16:15:00 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void ff()
{
	system("leaks Go_Crazy");
}
int main() 
{

	// atexit(ff);
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("Ice");
	// me->equip(tmp);
	// tmp = src->createMateria("Cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	MateriaSource *a = new MateriaSource();
	MateriaSource *b = new MateriaSource();
	a->learnMateria(new Ice());

	*b = *a;
	

	delete a;
	delete b;
}