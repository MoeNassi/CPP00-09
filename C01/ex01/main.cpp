/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:30:13 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/22 07:55:39 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define N 20

int main() {
	Zombie	*Zombies;

	Zombies = zombieHorde(5, "Abdelmoula");
	for (int index = 0; index < N; index++)
		Zombies->annonce();
	delete[] Zombies;
}

