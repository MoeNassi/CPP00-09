/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 02:22:22 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/07 02:04:44 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		add_contact(phonebook *div, int i)
{
	std::string input;
	std::string	fname;
	std::string	sname;
	std::string	nname;
	std::string	pnumber;

	std::cout << "First Name : ";
	if (!std::getline(std::cin, input))
		exit(0);
	fname = input;
	std::cout << "Second Name : ";
	if (!std::getline(std::cin, input))
		exit(0);
	sname = input;
	std::cout << "Nick Name : ";
	if (!std::getline(std::cin, input))
		exit(0);
	nname = input;
	std::cout << "Phone Number : ";
	if (!std::getline(std::cin, input))
		exit(0);
	pnumber = input;
	std::cout << "Dark Secret : ";
	if (!std::getline(std::cin, input))
		exit(0);
	if (!(fname.empty() || sname.empty() || nname.empty() || pnumber.empty()
		|| input.empty()))
	{
		div->contact[i].setterFname(fname);
		div->contact[i].setterSname(sname);
		div->contact[i].setterNname(nname);
		div->contact[i].setterPnumber(pnumber);
		div->contact[i].setterDsecret(input);
		i++;
	}
	return (i);
}

void	search_contact(phonebook *div)
{
	int	al;

	std::cout << std::setw(10) << "Index" << "|" << "First Name" << "| "
		<< "Last Name" << "| " << "Nick Name" << "|" << std::endl;
	for (int j = 0; j < 8; j++)
	{
		if (div->contact[j].getterFname().empty() || div->contact[j].getterSname().empty()
				|| div->contact[j].getterNname().empty() || div->contact[j].getterPnumber().empty()
				|| div->contact[j].getterDsecret().empty())
			break ;
		std::cout << std::setw(10) << j + 1  << "|" << std::setw(10);
		if (div->contact[j].getterFname().length() - 1 < 10)
			std::cout << div->contact[j].getterFname() << "|" << std::setw(10);
		else
			std::cout << div->contact[j].getterFname().substr(0, 8) << "." << "|";
		if (div->contact[j].getterSname().length() - 1 < 10)
			std::cout << div->contact[j].getterSname() << "|" << std::setw(10);
		else
			std::cout << div->contact[j].getterSname().substr(0, 8) << "." << "|";
		if (div->contact[j].getterNname().length() - 1 < 10)
			std::cout << div->contact[j].getterNname() <<  "|" << std::endl;
		else
			std::cout << div->contact[j].getterNname().substr(0, 8) << "." << "|" << std::endl;
	}
	std::cout << "Enter index of contact : ";
	std::cin >> al;
	if (al > 8)
		std::cout << "Error the index is above 8 or is not a digit" << "\n";
	else
	{
		for (int i = 0; i < 8; i++)
		{
			if (al - 1 == i && !(div->contact[i].getterFname().empty() || div->contact[i].getterSname().empty()
				|| div->contact[i].getterNname().empty() || div->contact[i].getterPnumber().empty() ||
				div->contact[i].getterDsecret().empty()))
			{
				std::cout << "First Name : " << div->contact[i].getterFname() << std::endl;
				std::cout << "Last Name : " << div->contact[i].getterSname() << std::endl;
				std::cout << "Nick Name : " << div->contact[i].getterNname() << std::endl;
				std::cout << "Phone number : " << div->contact[i].getterPnumber() << std::endl;
				std::cout << "Dark Secret : " << div->contact[i].getterDsecret() << std::endl;
			}
			else
				break ;
		}
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
		if (!std::getline(std::cin, input))
			exit(0);
		if (input == "ADD")
			i = add_contact(&div, i);
		if (i > 7)
			i = 7;
		if (input == "SEARCH")
			search_contact(&div);
	}
	return (0);
}