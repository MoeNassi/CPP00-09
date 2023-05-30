/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 02:40:03 by mnassi            #+#    #+#             */
/*   Updated: 2023/05/30 03:07:58 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <compare>

class	Phonebook
{
	private:
	std::string	fname;
	std::string	lname;
	std::string	nickname;
	int			phonenumber;
	std::string	secret;

	public:
	Phonebook(std::string first, std::string second, std::string nname, int number, std::string darkest)
	{
		fname = first;
		lname = second;
		nickname = nname;
		phonenumber = number;
		darkest = secret;
	}
};

int main()
{
	std::string	input;
	std::cout << "Enter a command :";
	std::cin >> input;
}