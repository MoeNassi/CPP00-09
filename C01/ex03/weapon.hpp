/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 06:04:52 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/19 21:06:46 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

#define st_ std::string

class Weapon {
	private :
		st_ type;
	public :
		Weapon( );
		Weapon( st_ name );
		const st_& getType();
		void	setType( st_ setter);
};

#endif