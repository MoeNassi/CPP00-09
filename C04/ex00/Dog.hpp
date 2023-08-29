/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:38:43 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/29 18:33:46 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public :
		Dog( void );
		Dog( st_ type );
		Dog( Dog *copy );
		Dog &operator=(const Dog &b);
		void	makeSound() const;
		~Dog( void );
};

#endif