/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:30:06 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/30 14:44:48 by mnassi           ###   ########.fr       */
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
		Brain( Brain *copy );
		~Brain();
};

#endif