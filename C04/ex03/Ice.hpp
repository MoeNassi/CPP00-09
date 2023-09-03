/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:39:21 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/03 17:48:02 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class ice : public AMateria
{		
	public :
		ice( void );
		ice(st_ const & type);
		st_ const & getType() const; //Returns the materia type
		ice* clone() const;
		void use(ICharacter& target);
		~ice();
};

#endif