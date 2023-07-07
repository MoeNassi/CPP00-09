/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 02:22:22 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/07 04:59:57 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		add_contact(phonebook *div, int i)
{
	std::string dsecret;
	std::string	fname;
	std::string	sname;
	std::string	nname;
	std::string	pnumber;

	std::cout << "First Name : ";
	std::cin >> fname;
	std::cout << "Second Name : ";
	std::cin >> sname;
	std::cout << "Nick Name : ";
	std::cin >> nname;
	std::cout << "Phone Number : ";
	std::cin >> pnumber;
	std::cout << "Dark Secret : ";
	std::cin >> dsecret;
	div->contact[i].setterFname(fname);
	div->contact[i].setterSname(sname);
	div->contact[i].setterNname(nname);
	div->contact[i].setterPnumber(pnumber);
	div->contact[i].setterDsecret(dsecret);
	i++;
	return (i);
}

void	search_contact(phonebook *div)
{
	int	al;

	std::cout << "|" << std::setw(10) << YELLOW "Index" RESET << "|" << std::setw(10) << YELLOW "First Name" RESET << "|"
		<< std::setw(10) << YELLOW "Last Name" RESET << "|" << std::setw(10) << YELLOW "Nick Name" RESET << "|" << std::endl;
	for (int j = 0; j < 8; j++)
	{
		if (div->contact[j].getterFname().empty() || div->contact[j].getterSname().empty()
				|| div->contact[j].getterNname().empty() || div->contact[j].getterPnumber().empty()
				|| div->contact[j].getterDsecret().empty())
			break ;
		std::cout << "|" << std::setw(10) << YELLOW << j + 1 << RESET;
		if (div->contact[j].getterFname().length() - 1 < 10)
			std::cout << "|" << std::setw(10) << YELLOW << div->contact[j].getterFname() << RESET;
		else
			std::cout << "|" << YELLOW << div->contact[j].getterFname().substr(0, 8) + "." << RESET;
		if (div->contact[j].getterSname().length() - 1 < 10)
			std::cout << "|" << std::setw(10) << YELLOW << div->contact[j].getterSname() << RESET;
		else
			std::cout << "|" << YELLOW << div->contact[j].getterSname().substr(0, 8) + "." << RESET;
		if (div->contact[j].getterNname().length() - 1 < 10)
			std::cout << "|" << std::setw(10) << YELLOW << div->contact[j].getterNname() << RESET <<  "|" << std::endl;
		else
			std::cout << "|" << YELLOW << div->contact[j].getterNname().substr(0, 8) + "." << RESET << "|" << std::endl;
	}
	std::cout << "Enter index of contact : ";
	std::cin >> al;
	if (al > 8 || isdigit(al)) {
		std::cout << "Error contact not found \n";
		exit(0);
	}
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
	while (!std::cin.fail())
	{
		std::cout << BLUE "COMMANDS : " RESET << CYAN "ADD | SEARCH | EXIT " RESET << std::endl;
		std::cout << RED "Enter one : " RESET;
		std::cin >> input;
		if (!input.compare("EXIT"))
			exit(0);
		if (!input.compare("ADD"))
			i = add_contact(&div, i);
		if (i > 7)
			i = 7;
		if (!input.compare("SEARCH"))
			search_contact(&div);
	}
	return (0);
}