/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:38:43 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/08 14:40:28 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private :
		Brain	*idea;
	public :
		
		
		Dog( void );
		Dog( st_ type );
		Dog( const Dog &copy );
		Dog &operator=(const Dog &b);
		void	makeSound() const;
		~Dog( void );
};

#endif