/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:37:42 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/08 15:44:19 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure( void );
		Cure(st_ const & type);
		Cure(Cure &copy);
		st_ const & getType() const; //Returns the materia type
		AMateria* clone() const;
		Cure &operator=(const Cure &b);
		void use(ICharacter& target);
		~Cure();
};

#endif