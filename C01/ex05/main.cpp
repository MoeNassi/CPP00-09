/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 08:24:13 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/22 09:58:00 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
	Harl	ptr;
	st_		nb;

	nb = av[1];
	if (ac != 2 || nb.length() > 1 || !isdigit(nb[0])) {
		std::cout << "Arguments Error" << std::endl;
		return (0);
	}
	if (std::stoi(av[1]) > 4 || std::stoi(av[1]) == 0) {
		std::cout << "Index Error" << std::endl;
		return (0);
	}
	ptr.complain(av[1]);
}