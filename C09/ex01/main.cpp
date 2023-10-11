/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:14:47 by mnassi            #+#    #+#             */
/*   Updated: 2023/10/11 18:58:12 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	is_form_good( st_ form ) {
	if (form.empty())
		return false;
	for (int i = 0; i < (int)form.size(); i++) {
		if (form[i] == '+' || form[i] == '-' || form[i] == '/' || form[i] == '*'
			|| ((isdigit(form[i]) && (form[i + 1] == ' ' || form[i + 1] == '\0')) || form[i] == ' '))
				i++;
		else
			return false;
	}
	return (true);
}

int	operands_( int first, int sec, char ope ) {
	if (ope == '-')
		return first - sec;
	if (ope == '+')
		return first + sec;
	if (ope == '/')
		return first / sec;
	if (ope == '*')
		return first * sec;
	return (0);
}

bool	FILO( char *last ) {
	std::stack < int > _arr;
	for (int i = 0; last[i]; i++) {
		if (isdigit(last[i]))
			_arr.push((int)last[i]);
		else if (last[i] == '*' || last[i] == '+' || last[i] == '/' || last[i] == '-') {
			std::cout << "_arr.size()" << std::endl;
			for (int j = 0; j < (int)_arr.size() - 1; j++) {
				int	st = _arr.top();
				_arr.pop();
				int st_2 = _arr.top();
				std::cout << operands_(st, st_2, last[i]) << std::endl;
			}
		}
		else if (last[i] == ' ' && last[i + 1] != ' ')
			i++;
		else
			return false;
	}
	return true;
}

int main(int ac, char **av) {
	if (ac != 2)
		return std::cout << "Error" << std::endl, 0;
	if (!is_form_good(av[1]))
		return std::cout << "Error : Bad Syntax" << std::endl, 0;
	if (!FILO( av[1] ))
		return std::cout << "Error : Bad Syntax" << std::endl, 0;
}