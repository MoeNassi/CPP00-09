/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:30:13 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/18 04:01:55 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define N 20

int main() {
	Zombie	*Zombies;
<<<<<<< HEAD

	Zombies = zombieHorde(N, "Abdelmoula");
	for (int index = 0; index < N; index++) {
		Zombies->annonce();
	}
	delete[] Zombies;
}
=======
	Zombies = zombieHorde(5, "Abdelmoula");
	for (int index = 0; index < N; index++)
		Zombies->annonce();
	delete[] Zombies;
}
>>>>>>> 01d56b82f34d038b7765e4dd04f80408bb40764a
