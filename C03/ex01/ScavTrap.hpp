/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:17:32 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/24 02:10:03 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
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

class ScavTrap : public ClapTrap {
	public :
		ScavTrap();
		ScavTrap( st_ name );
		ScavTrap( ScavTrap *copy );
		void attack( const st_ &target );
		void GuardGate( void );
		~ScavTrap( void );
		ScavTrap &operator=(const ScavTrap &b);
};

# endif