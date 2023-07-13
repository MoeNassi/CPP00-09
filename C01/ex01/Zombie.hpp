/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:30:20 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/13 14:28:36 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#define st std::string

class Zombie
{
	private:
		st	name;
	public:
		Zombie();
		Zombie(st name);
		void	annonce(void);
		void	set( st n );
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif