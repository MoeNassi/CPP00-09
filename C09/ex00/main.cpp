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

bool	check_if_nb( st_ type ) {
	for (int i = 0; type[i] && type[i] != ' '; i++)
		if (!isdigit(type[i]))
			return (false);
	return (true);
}

bool	linear( st_ year, st_ month, st_ day ) {
	if (!check_if_nb(year) || !check_if_nb(day) || !check_if_nb(month))
		return (false);
	if (year.length() == 4 && month.length() == 2 && day.length() == 3)
		return (true);
	return (false);
}

bool	four_two_two( st_ file ) {
	std::fstream	check(file);
	if (!check.is_open())
		return (false);
	st_ year;
	st_ month;
	st_ day;
	st_	stock;
	std::getline(check, year, '-');
	std::getline(check, month, '-');
	std::getline(check, day, '|');
	if (!linear( year, month, day ))
		return (false);
	return (true);
}

bool	main_ft(st_ input, st_ file) { // check for max days
	int	minus = 0;
	for (int i = 0; input[i]; i++) {
		if (input[i] == '-')
			minus++;
	}
	if (!four_two_two( file ))
		return false;
	if (minus != 2)
		return (false);
	return true;
}

bool	ft_value( st_ input ) {
	for (int i = 0; input[i]; i++)
		if (isdigit(input[i]))
			return (true);
	return (false);
}

bool	date_value( st_ input, st_ file ) {
	if (input[0] == ' ' && isdigit(input[1]))
		ft_value( &input[1] );
	else if (main_ft(input, file))
		return (true);
	else
		return (false);
	return (true);
}

bool	then_checkThis( st_ file ) {
	std::ifstream	in(file);
	st_				input;
	if (!in.is_open())
		return (false);
	while (std::getline(in, input, '|'))
		if (!date_value(input, file))
			return (false);
	return (true);
}

int main(int ac, char **av) {
	if (ac > 2)
		return (std::cout << "Too Many Arguments" << std::endl, 0);
	if (!checkfile(av[1]))
		return (std::cout << "Extension Error" << std::endl, 0);
	if (!then_checkThis(av[1]))
		return (std::cout << "Input file Error" << std::endl, 0);
}