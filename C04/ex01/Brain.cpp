/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:29:55 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/30 17:26:23 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << GREEN "Brain Default Constructor Called" RESET  << std::endl;
}

Brain::Brain( st_ idea ) {
	std::cout << GREEN "Brain Constructor Called" RESET  << std::endl;
	this->ideas[0] = idea;
}

Brain::Brain( Brain *copy ) {
	std::cout << GREEN "Brain copy constructor Called" RESET << std::endl;
	*this = copy;
}

Brain::~Brain( void ) {
	std::cout << "Brain Destructor Called" << std::endl;
}