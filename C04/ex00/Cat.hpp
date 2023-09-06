/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:36:00 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 16:26:12 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat( void );
		Cat( st_ type );
		Cat( const Cat &copy );
		Cat &operator=(const Cat &b);
		void	makeSound() const; 
		~Cat( void );
};

#endif