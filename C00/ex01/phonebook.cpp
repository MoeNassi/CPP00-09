/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 05:19:15 by mnassi            #+#    #+#             */
/*   Updated: 2023/05/31 04:42:12 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	ft_fill_1st(std::string& input)
{
	phonebook contact;

	std::cout << "Enter first name : ";
	std::cin >> input;
	contact.setName(input);
	std::cout << "Enter sec name : ";
	std::cin >> input;
	contact.setLName(input);
	std::cout << "Enter nickname : ";
	std::cin >> input;
	contact.setNName(input);
	std::cout << "Enter phone number : ";
	std::cin >> input;
	contact.setPNumber(input);
	std::cout << "Enter a secret : ";
	std::cin >> input;
	contact.setSecret(input);
}

void	ft_fill_2st(std::string& input)
{
	phonebook contact2;

	std::cout << "Enter first name : ";
	std::cin >> input;
	contact2.setName(input);
	std::cout << "Enter sec name : ";
	std::cin >> input;
	contact2.setLName(input);
	std::cout << "Enter nickname : ";
	std::cin >> input;
	contact2.setNName(input);
	std::cout << "Enter phone number : ";
	std::cin >> input;
	contact2.setPNumber(input);
	std::cout << "Enter a secret : ";
	std::cin >> input;
	contact2.setSecret(input);
}

void	ft_fill_3st(std::string& input)
{
	phonebook contact3;

	std::cout << "Enter first name : ";
	std::cin >> input;
	contact3.setName(input);
	std::cout << "Enter sec name : ";
	std::cin >> input;
	contact3.setLName(input);
	std::cout << "Enter nickname : ";
	std::cin >> input;
	contact3.setNName(input);
	std::cout << "Enter phone number : ";
	std::cin >> input;
	contact3.setPNumber(input);
	std::cout << "Enter a secret : ";
	std::cin >> input;
	contact3.setSecret(input);
}

void	ft_fill_4st(std::string& input)
{
	phonebook contact4;

	std::cout << "Enter first name : ";
	std::cin >> input;
	contact4.setName(input);
	std::cout << "Enter sec name : ";
	std::cin >> input;
	contact4.setLName(input);
	std::cout << "Enter nickname : ";
	std::cin >> input;
	contact4.setNName(input);
	std::cout << "Enter phone number : ";
	std::cin >> input;
	contact4.setPNumber(input);
	std::cout << "Enter a secret : ";
	std::cin >> input;
	contact4.setSecret(input);
}

void	ft_fill_5st(std::string& input)
{
	phonebook contact5;

	std::cout << "Enter first name : ";
	std::cin >> input;
	contact5.setName(input);
	std::cout << "Enter sec name : ";
	std::cin >> input;
	contact5.setLName(input);
	std::cout << "Enter nickname : ";
	std::cin >> input;
	contact5.setNName(input);
	std::cout << "Enter phone number : ";
	std::cin >> input;
	contact5.setPNumber(input);
	std::cout << "Enter a secret : ";
	std::cin >> input;
	contact5.setSecret(input);
}

void	ft_fill_6st(std::string& input)
{
	phonebook contact6;

	std::cout << "Enter first name : ";
	std::cin >> input;
	contact6.setName(input);
	std::cout << "Enter sec name : ";
	std::cin >> input;
	contact6.setLName(input);
	std::cout << "Enter nickname : ";
	std::cin >> input;
	contact6.setNName(input);
	std::cout << "Enter phone number : ";
	std::cin >> input;
	contact6.setPNumber(input);
	std::cout << "Enter a secret : ";
	std::cin >> input;
	contact6.setSecret(input);
}

void	ft_fill_7st(std::string& input)
{
	phonebook contact7;

	std::cout << "Enter first name : ";
	std::cin >> input;
	contact7.setName(input);
	std::cout << "Enter sec name : ";
	std::cin >> input;
	contact7.setLName(input);
	std::cout << "Enter nickname : ";
	std::cin >> input;
	contact7.setNName(input);
	std::cout << "Enter phone number : ";
	std::cin >> input;
	contact7.setPNumber(input);
	std::cout << "Enter a secret : ";
	std::cin >> input;
	contact7.setSecret(input);
}

void	ft_fill_8st(std::string& input)
{
	phonebook contact8;

	std::cout << "Enter first name : ";
	std::cin >> input;
	contact8.setName(input);
	std::cout << "Enter sec name : ";
	std::cin >> input;
	contact8.setLName(input);
	std::cout << "Enter nickname : ";
	std::cin >> input;
	contact8.setNName(input);
	std::cout << "Enter phone number : ";
	std::cin >> input;
	contact8.setPNumber(input);
	std::cout << "Enter a secret : ";
	std::cin >> input;
	contact8.setSecret(input);
}

int	askinguser(std::string& input, int nmb)
{
	phonebook contact;

	nmb = contact.incrementcontact(nmb);
	if (nmb == 1)
		ft_fill_1st(input);
	if (nmb == 2)
		ft_fill_2st(input);
	if (nmb == 3)
		ft_fill_3st(input);
	if (nmb == 4)
		ft_fill_4st(input);
	if (nmb == 5)
		ft_fill_5st(input);
	if (nmb == 6)
		ft_fill_6st(input);
	if (nmb == 7)
		ft_fill_7st(input);
	if (nmb == 8)
		ft_fill_8st(input);
	return (nmb);
}

int main()
{
	phonebook inx;
	int			i;
	std::string	input;

	i = 0;
	while (input != "EXIT")
	{
		inx.incrementcontact(i);
		std::cout << "Enter a command : ";
		std::cin >> input;
		if (input == "ADD")
			i = askinguser(input, i);
		else if (input == "SEARCH")
			ft_search()
	}
	return (0);
}