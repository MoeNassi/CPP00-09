/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:39:11 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/21 12:03:12 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month."  << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now."  << std::endl;
}

void Harl::complain( std::string level ) {
	st_	arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		i;

	i = 0;
	while (i < 4 && level != arr[i])
		i++;
	i++;
	switch (i) {
		case 1 :
			std::cout << "[ DEBUG ]" << std::endl;
			Harl::debug();
		case 2 :
			std::cout << "[ INFO ]" << std::endl;
			Harl::info();
		case 3 :
			std::cout << "[ WARNING ]" << std::endl;
			Harl::warning();
		case 4 :
			std::cout << "[ ERROR ]" << std::endl;
			Harl::error();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}