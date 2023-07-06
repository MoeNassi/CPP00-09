/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 02:22:22 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/06 05:47:43 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		add_contact(phonebook *div, int i)
{
	std::string	input;

	std::cout << "First Name : ";
	std::cin >> input;
	div->contact[i].setterFname(input);
	std::cout << "Second Name : ";
	std::cin >> input;
	div->contact[i].setterSname(input);
	std::cout << "Nick Name : ";
	std::cin >> input;
	div->contact[i].setterNname(input);
	i++;
	return (i);
}

void	search_contact(phonebook *div)
{
	std::string	input;

	input = "";
	std::cout << "Enter name of contact : ";
	std::cin >> input;
	for (int i = 0; i < 8; i++)
	{
		if (div->contact[i].getterFname() == input)
			std::cout << div->contact[i].getterFname() << " | " << div->contact[i].getterSname() << " | " << div->contact[i].getterNname() << std::endl;
	}
}

int main()
{
	phonebook	div;
	int			i;
	std::string	input;

	input = "";
	i = 0;
	while (input != "EXIT")
	{
		std::cout << "Enter a command : ";
		std::cin >> input;
		if (input == "ADD")
			i = add_contact(&div, i);
		if (i > 7)
			i = 7;
		if (input == "SEARCH")
			search_contact(&div);
	}
	return (0);
}