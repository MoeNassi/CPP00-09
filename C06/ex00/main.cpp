/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:46:58 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/24 16:09:29 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac > 2 || !av[1]) {
		std::cout << "One Arguments" << std::endl;
		return (0);
	}
	ScalarConverter::convert(av[1]);
}