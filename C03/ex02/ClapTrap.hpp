/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:17:32 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/22 14:32:50 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define	st_ std::string

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"

class ClapTrap {
	protected :
		st_	name;
		int	Hit_Point;
		int	Energy_Point;
		int	Attack_Damage;
	public :
		ClapTrap();
		ClapTrap( st_ name );
		void attack( const st_ &target );
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &b);
};

# endif