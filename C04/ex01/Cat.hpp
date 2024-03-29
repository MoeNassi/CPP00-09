/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:36:00 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/08 14:40:34 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private :
		Brain	*idea;
	public :
		Cat( void );
		Cat( st_ type );
		Cat( const Cat &copy );
		Cat &operator=(const Cat &b);
		void	makeSound() const; 
		~Cat( void );
};

#endif