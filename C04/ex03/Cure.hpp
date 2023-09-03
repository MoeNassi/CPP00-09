/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:37:42 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/03 17:47:03 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class cure : public AMateria
{
	public :
		cure( void );
		cure(st_ const & type);
		st_ const & getType() const; //Returns the materia type
		cure* clone() const;
		void use(ICharacter& target);
		~cure();
};

#endif