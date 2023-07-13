/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:30:13 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/13 14:37:45 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define N 4

void	Zombie::annonce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main() {
	Zombie	*Zombies;
	Zombies = zombieHorde(5, "Abdelmoula");
	for (int index = 0; index < N; index++) {
		Zombies->annonce();
	}
}