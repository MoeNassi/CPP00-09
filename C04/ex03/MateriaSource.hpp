/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:38:48 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/02 18:00:45 by mnassi           ###   ########.fr       */
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
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		~MateriaSource();
};

#endif