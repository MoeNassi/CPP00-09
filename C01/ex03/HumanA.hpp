/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 06:04:43 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/22 07:45:57 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
#define	HUMANA_HPP

#include <iostream>
#include <string>
#include "weapon.hpp"

#define st_ std::string

class HumanA {
	private:
		st_		name;
		Weapon	&weapon;
	public:
		HumanA( st_ nm, Weapon &weapon );
		void	attack();
		~HumanA();
};

#endif