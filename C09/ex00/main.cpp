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
	if (year.length() == 4 && month.length() == 2 && day.length() == 2)
		return (true);
	return (false);
}

bool	max_days( st_ year, st_ month, st_ day ) {
	std::stringstream	ye(year);
	std::stringstream	mon(month);
	std::stringstream	da(day);
	int		year_ = 0;
	ye >> year_;
	int		month_ = 0;
	mon >> month_;
	int		day_ = 0;
	da >> day_;
	if (year_ > 2022 || year_ < 2009)
		return (printf("%d\n", year_),false);
	if (month_ < 1 || month_ > 12)
		return (false);
	if (day_ < 1 || day_ > 31)
		return (false);
	return true;
}

bool	four_two_two( st_ input ) {
	st_ year, month, day;
	int 	rember = 0;
	for (int i = 0; input[i]; i++) {
		if (input[i] == '-' && year.empty()) {
			year = input.substr(0, i);
			rember = i + 1;
		}
		else if (input[i] == '-' && month.empty()) {
			month = input.substr(rember, i - rember);
			rember = i + 1;
		}
		else if (input[i] == '|')
			day = input.substr(rember, i - rember - 1);
	}
	if (!linear(year, month, day) || !check_if_nb(year)
		|| !check_if_nb(month) || !check_if_nb(day) || !max_days(year, month, day))
		return (false);
	return (true);
}

bool	main_ft(st_ input) { // check for max days
	int	minus = 0;
	int pip = 0;
	for (int i = 0; input[i]; i++) {
		if (input[i] == '-')
			minus++;
		if (input[i] == '|')
			pip++;
	}
	if (!four_two_two( input ))
		return false;
	if (minus != 2 && pip != 1)
		return (false);
	return true;
}

int	count_line( st_ file ) {
	std::ifstream	re(file);
	int				lines = 0;
	while (std::getline(re, file))
		lines++;
	return (lines);
}

bool	all_good( st_ input[], st_ file ) {
	int i = -1;
	int max = count_line(file);
	while (input[++i].data() && i < max)
		if (!main_ft(input[i].data()))
			return (false);
	return (true);
}

bool	then_checkThis( st_ file ) {
	std::ifstream	in(file);
	st_				input[count_line(file) + 1];
	if (!in.is_open())
		return (false);
	for (int i = 0; std::getline(in, input[i]); i++);
	if (!all_good(input, file))
		return (false);
	return (true);
}

int main(int ac, char **av) {
	if (ac != 2)
		return (std::cout << "Too Many Arguments" << std::endl, 0);
	if (!checkfile(av[1]))
		return (std::cout << "Extension Error" << std::endl, 0);
	if (!then_checkThis(av[1]))
		return (std::cout << "Input file Error" << std::endl, 0);
}