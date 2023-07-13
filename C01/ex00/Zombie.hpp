/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:08:01 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/12 17:40:04 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#define st std::string

class Zombie {
	private :
		st	name;
	public :
		Zombie();
		Zombie( st nm );
			void announce( void );
		~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif