/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:38:48 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 13:52:40 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource {
	private :
		AMateria	*slots[4];
	public :
		MateriaSource( void );
		void learnMateria(AMateria*);
		MateriaSource( MateriaSource &copy );
		AMateria* createMateria(std::string const & type);
		MateriaSource &operator=(const MateriaSource &b);
		~MateriaSource();
};

#endif