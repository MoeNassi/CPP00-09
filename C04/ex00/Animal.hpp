/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:00:00 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/29 18:36:27 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"

#define	st_ std::string

class Animal {
	public :
		Animal( void );
		Animal( st_ set );
		Animal( Animal *obj );
		Animal &operator=(const Animal &b);
		st_		getType( void ) const;
		virtual void makeSound() const ;
		~Animal();
	protected :
		st_	type;
};

#endif