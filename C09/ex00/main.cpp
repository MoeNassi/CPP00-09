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
		return (false);
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
		else if (!month.empty())
			day = input.substr(rember);
	}
	if (!linear(year, month, day) || !check_if_nb(year)
		|| !check_if_nb(month) || !check_if_nb(day) || !max_days(year, month, day))
		return (false);
	return (true);
}

bool	main_ft(st_ input) {
	int	minus = 0;
	for (int i = 0; input[i]; i++) {
		if (input[i] == '-')
			minus++;
	}
	if (!four_two_two( input ))
		return false;
	if (minus != 2)
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

bool	check_firstline( st_ input ) {
	st_ like = "date | value";
	if (input != like)
		return (false);
	return (true);
}

bool	then_checkThis( st_ file ) {
	std::ifstream	in(file);
	st_				input[count_line(file) + 1];
	if (!in.is_open())
		return (false);
	for (int i = 0; std::getline(in, input[i]); i++);
	if (!check_firstline(input[0]))
		return (false);
	return (true);
}

bool	send( st_ value ) {
	std::stringstream ss(value);
	int st = 0;
	if (value[0] != ' ' && !isdigit(value[1]))
		return (false);
	for (int i = 1; value[i]; i++) {
		if (value[i] == '.' || value[i] == '+')
			i++;
		if (!isdigit(value[i]))
			return (false);
	}
	if (!(ss >> st))
		return (false);
	if (st < 0 || st > 1000)
		return false;
	return (true);
}

void	read_N_reaaad( std::map < st_, st_ > &_arr ) {
	std::ifstream	read("data.csv");
	st_	temp, key, value;
	if (!read.is_open())
		return ;
	std::getline(read, temp);
	while (std::getline(read, key, ',') && std::getline(read, value))
		_arr[key] = value;
}

float	found_it( st_ value, std::map < st_, st_ >::iterator v_s ) {
	std::stringstream ss(v_s->second);
	float first;
	ss >> first;
	std::stringstream st(value);
	float sec;
	st >> sec;
	return (sec * first);
}

bool	theres_is_a_pip( st_ input ) {
	for (int i = 0; input[i]; i++)
		if (input[i] == '|')
			return (true);
	return (false);
}

void	container_mp( st_ file ) {
	std::ifstream	read(file);
	std::string key, value, temp;
	std::map < st_, st_ > data_base;
	if (!read.is_open())
		return ;
	read_N_reaaad( data_base );
	std::getline(read, value);
	while (std::getline(read, temp)) {
		size_t index = temp.find('|');
		if (index != std::string::npos)  {
			key = temp.substr(0, index - 1);
			value = temp.substr(index + 1);
		}
		if (value.empty() || !send(value) || key.empty() || !main_ft( key )) {
			std::cout << "Error: Perhaps the value is empty" << std::endl;
			continue;
		}
		std::map < st_, st_ >::iterator st = data_base.find(key);
		if (st == data_base.end())
			st = data_base.lower_bound(key);
		std::cout << key << " =>" << value << " = " << found_it(value, st) << std::endl;
	}
}

int main(int ac, char **av) {
	if (ac != 2 && !av[1])
		return (std::cout << "Error: could not open file" << std::endl, 0);
	if (!then_checkThis(av[1]))
		return std::cout << "Error: Input file" << std::endl, 0;
	container_mp(av[1]);
}