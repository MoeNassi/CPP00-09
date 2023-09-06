/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:30:06 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/06 16:30:43 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
	private:
		st_	ideas[100];
	public:
		Brain( void );
		Brain( st_ idea );
		Brain &operator=(const Brain &b);
		Brain( const Brain &copy );
		~Brain();
};

#endif