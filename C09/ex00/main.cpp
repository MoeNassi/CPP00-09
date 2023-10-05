/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:12:35 by mnassi            #+#    #+#             */
/*   Updated: 2023/10/05 01:12:35 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	checkfile( st_ file ) {
	st_ extension = ".txt";
	if (&file[file.length() - 4] == extension)
		return (true);
	return (false);
}

bool	main_ft(st_ input) { // check after |
	int	pip = 0;
	int	minus = 0;
	st_ check = "YYYY-MM-DD ";
	for (int i = 0; input[i]; i++) {
		check[i] = input[i];
		if (input[i] == '-')
			minus++;
		if (input[i] == '|')
			pip++;
	}
	if (input == check)
		return true;
	if (minus != 2 || pip != 1)
		return (false);
	return false;
}

bool	date_value( st_ input ) {
	if (!main_ft(input))
		return (false);
	return (true);
}

bool	then_checkThis( st_ file ) {
	(void)file;
	std::ifstream	in("input.txt");
	st_				input;
	if (!in.is_open())
		return (false);
	while (std::getline(in, input, '|'))
		if (!date_value(input))
			return (false);
	return (true);
}

int main(int ac, char **av) {
	if (ac >= 3)
		return (std::cout << "Too Many Arguments" << std::endl, 0);
	if (!checkfile(av[1]))
		return (std::cout << "Extension Error" << std::endl, 0);
	if (!then_checkThis(av[1]))
		return (std::cout << "Input file Error" << std::endl, 0);
}