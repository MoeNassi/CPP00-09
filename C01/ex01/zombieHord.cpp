/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:33:19 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/13 14:36:42 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie	*Zmb;

	Zmb = new Zombie[N];
	for (int i = 0; i < N; i++) {
		Zmb[i].set(name);
	}
	return (Zmb);
}