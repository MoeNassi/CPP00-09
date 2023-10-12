/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:14:47 by mnassi            #+#    #+#             */
/*   Updated: 2023/10/12 17:58:46 by mnassi           ###   ########.fr       */
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
	if (ope == '/' && sec == 0)
		return -9999;
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

bool	FILO( st_ last ) {
	std::stack < int > _arr;
	if (!isdigit(last[0]) && last[0] != '-')
		return false;
	for (int i = 0; last[i]; i++) {
		if (isdigit(last[i]) || (last[i] == '-' && isdigit(last[i + 1])))
			_arr.push(last[i] - '0');
		else if (last[i] == '+' || last[i] == '/' || last[i] == '-' || last[i] == '*') {
			if (_arr.empty() || _arr.size() == 1)
				return std::cout << "ASDfs\n", false;
			int st = _arr.top();
			_arr.pop();
			int st_2 = _arr.top();
			_arr.pop();
			int pri = operands_(st_2, st, last[i]);
			if (pri == -9999)
				return false;
			_arr.push(pri);
		}
		else if (last[i] == ' ' && last[i + 1] != ' ')
			continue ;
		else
			return false;
	}
	if (_arr.size() >= 2)
		return false;
	std::cout << _arr.top() << std::endl;
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