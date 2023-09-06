/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:45:03 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 16:26:48 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( st_ type );
		WrongCat( const WrongCat &copy );
		void makeSound() const;
		WrongCat &operator=(const WrongCat &b);
		st_	 getType( void ) const;
		~WrongCat();
};

#endif