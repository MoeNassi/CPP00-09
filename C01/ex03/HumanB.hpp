/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 06:04:48 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/22 07:46:13 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include <iostream>
#include <string>
#include "weapon.hpp"

#define st_ std::string

class HumanB {
	private:
		st_		name;
		Weapon	*weapon;
	public:
		HumanB();
		HumanB( st_ nm );
		void	attack();
		void	setWeapon( Weapon &weapon );
		~HumanB();
};

#endif