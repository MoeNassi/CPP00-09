/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 04:17:39 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/11 09:25:10 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	int			i;
	phonebook	div;
	st	input;

	input = "";
	i = 0;
	while (1)
	{
		std::cout << BLUE "COMMANDS : " RESET << CYAN "ADD | SEARCH | EXIT " RESET << std::endl;
		std::cout << RED "Enter one : " RESET;
		if (!std::getline(std::cin, input))
			return (0);
		if (!input.compare("EXIT"))
			return (0);
		if (!input.compare("ADD"))
			i = add_contact(&div, i);
		if (i > 7)
			i = 0;
		if (!input.compare("SEARCH"))
			search_contact(&div, i);
	}
	return (0);
}
