/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:39:37 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/21 11:49:54 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
	Harl	ptr;

	if (ac != 2) {
		std::cout << "Arguments Error" << std::endl;
		return (0);
	}
	ptr.complain(av[1]);
}