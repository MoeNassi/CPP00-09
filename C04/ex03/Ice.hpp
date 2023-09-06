/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:39:21 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 16:11:25 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{		
	public :
		Ice( void );
		Ice(st_ const & type);
		Ice(Ice &copy);
		st_ const & getType() const; //Returns the materia type
		AMateria* clone() const;
		Ice &operator=(const Ice &b);
		void use(ICharacter& target);
		~Ice();
};

#endif