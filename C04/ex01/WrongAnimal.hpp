/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:45:07 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/08 14:29:01 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define	st_ std::string
#include <iostream>

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"

class WrongAnimal {
	protected :
		st_ type;
	public:
		WrongAnimal( void );
		WrongAnimal( st_ type );
		WrongAnimal( const WrongAnimal &copy );
		st_		getType( void ) const;
		void	makeSound() const;
		WrongAnimal &operator=(const WrongAnimal &b);
		~WrongAnimal();
};

#endif