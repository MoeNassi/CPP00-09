/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 06:34:48 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/18 05:31:00 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon( st_ name ) {
	this->type = name;
}

Weapon::Weapon( ) {

}

const st_& Weapon::getType() {
	return (type);
}

void	Weapon::setType( st_ setter) {
	type = setter;
}
