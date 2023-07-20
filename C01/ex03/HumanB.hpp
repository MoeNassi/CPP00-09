/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 06:04:48 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/20 01:49:49 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
