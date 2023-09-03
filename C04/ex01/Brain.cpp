/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:29:55 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/01 17:15:33 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << GREEN "Brain Default Constructor Called" RESET  << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "no idea";
	}
}

Brain::Brain( st_ idea ) {
	std::cout << GREEN "Brain Constructor Called" RESET  << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = idea[i];
	}
}

Brain::Brain( Brain *copy ) {
	std::cout << GREEN "Brain copy constructor Called" RESET << std::endl;
	*this = copy;
}

Brain::~Brain( void ) {
	std::cout << "Brain Destructor Called" << std::endl;
}