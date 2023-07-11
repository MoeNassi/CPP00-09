/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 02:22:22 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/11 14:03:07 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook() {

};
phonebook::~phonebook() {

};

contacts	phonebook::getter_contact(int i) {
	return (contact[i]);
}

void		phonebook::contact_setf(st fn, int i) {
	contact[i].setterFname(fn);
}
void		phonebook::contact_setl(st ln, int i) {
	contact[i].setterSname(ln);
}
void		phonebook::contact_setn(st nn, int i) {
	contact[i].setterNname(nn);
}
void		phonebook::contact_setp(st pn, int i) {
	contact[i].setterPnumber(pn);
}
void		phonebook::contact_setd(st ds, int i) {
	contact[i].setterDsecret(ds);
}

int	checkall(st fname, st sname, st nname, st pnumber, st dsecret) {
	for (int index = 0; pnumber[index];) {
		if (isdigit(pnumber[index]))
			index++;
		else
			return (0);
	}
	for (int first = 0; fname[first];) {
		if (isalpha(fname[first]) || fname[first] == 32)
			first++;
		else
			return (0);
	}
	for (int sec = 0; sname[sec];) {
		if (isalpha(sname[sec]) || sname[sec] == 32)
			sec++;
		else
			return (0);
	}
	for (int third = 0; nname[third];) {
		if (isalpha(nname[third]) || nname[third] == 32)
			third++;
		else
			return (0);
	}
	for (int fourth = 0; dsecret[fourth];) {
		if (isalpha(dsecret[fourth]) || dsecret[fourth] == 32)
			fourth++;
		else
			return (0);
	}
	return (1);
}

int		add_contact(phonebook *div, int i)
{
	st dsecret;
	st	fname;
	st	sname;
	st	nname;
	st	pnumber;

	std::cout << "First Name : ";
	if (!std::getline(std::cin, fname))
		return (i);
	std::cout << "Second Name : ";
	if (!std::getline(std::cin, sname))
		return (i);
	std::cout << "Nick Name : ";
	if (!std::getline(std::cin, nname))
		return (i);
	std::cout << "Phone Number : ";
	if (!std::getline(std::cin, pnumber))
		return (i);
	std::cout << "Dark Secret : ";
	if (!std::getline(std::cin, dsecret))
		return (i);
	if (!(fname.empty() || sname.empty() || nname.empty() || pnumber.empty() || dsecret.empty()
		|| !checkall(fname, sname, nname, pnumber, dsecret))) {
		div->phonebook::contact_setf(fname, i);
		div->phonebook::contact_setl(sname, i);
		div->phonebook::contact_setn(nname, i);
		div->phonebook::contact_setp(pnumber, i);
		div->phonebook::contact_setd(dsecret, i);
		std::cout << GREEN "Contact Added" RESET << std::endl;
		i++;
	}
	else
		std::cout << RED "Contact Removed" RESET << std::endl;
	return (i);
}

void	search_contact(phonebook *div, int ch)
{
	st	al;

	std::cout << YELLOW "|" << std::setw(10) << "Index"
	<< "|" << std::setw(10) << "FirstName"
	<< "|" << std::setw(10) << "LastName"
	<< "|" << std::setw(10) << "NickName"
	<< "|" RESET << std::endl;
	for (int j = 0; j < 8; j++)
	{
		if (div->phonebook::getter_contact(j).getterFname().empty() || div->phonebook::getter_contact(j).getterSname().empty()
				|| div->phonebook::getter_contact(j).getterNname().empty() || div->phonebook::getter_contact(j).getterPnumber().empty()
					|| div->phonebook::getter_contact(j).getterDsecret().empty())
				break ;
			std::cout << YELLOW "|" << std::setw(10) << j;
			if (div->phonebook::getter_contact(j).getterFname().length() - 1 < 10)
				std::cout << "|" << std::setw(10) << div->phonebook::getter_contact(j).getterFname();
			else
				std::cout << "|" << div->phonebook::getter_contact(j).getterFname().substr(0, 9) + ".";
			if (div->phonebook::getter_contact(j).getterSname().length() - 1 < 10)
			std::cout << "|" << std::setw(10) << div->phonebook::getter_contact(j).getterSname();
		else
			std::cout << "|" << div->phonebook::getter_contact(j).getterSname().substr(0, 9) + ".";
		if (div->phonebook::getter_contact(j).getterNname().length() - 1 < 10)
			std::cout << "|" << std::setw(10) << div->phonebook::getter_contact(j).getterNname() <<  "|" RESET << std::endl;
		else
			std::cout << "|" << div->phonebook::getter_contact(j).getterNname().substr(0, 9) + "." << "|" RESET << std::endl;
	}
	std::cout << "Enter index of contact : ";
	if (std::getline(std::cin, al).fail()) {
		std::cout << RED "Error contact not found" RESET << std::endl;
		return ;
	}
	if (!isdigit(al[0]) || al.length() > 1) {
		std::cout << RED "Error contact not found" RESET << std::endl;
		return ;
	}
	if (al.empty() || stoi(al) > 7 || stoi(al) >= ch) {
		std::cout << RED "Error contact not found" RESET << std::endl;
		return ;
	}
	else
	{
		for (int i = 0; i < 8; i++)
		{
			if (stoi(al) == i && !(div->phonebook::getter_contact(i).getterFname().empty() && div->phonebook::getter_contact(i).getterSname().empty()
				&& div->phonebook::getter_contact(i).getterNname().empty() && div->phonebook::getter_contact(i).getterPnumber().empty() &&
				div->phonebook::getter_contact(i).getterDsecret().empty()))
			{
				std::cout << "First Name : " << div->phonebook::getter_contact(i).getterFname() << std::endl;
				std::cout << "Last Name : " << div->phonebook::getter_contact(i).getterSname() << std::endl;
				std::cout << "Nick Name : " << div->phonebook::getter_contact(i).getterNname() << std::endl;
				std::cout << "Phone number : " << div->phonebook::getter_contact(i).getterPnumber() << std::endl;
				std::cout << "Dark Secret : " << div->phonebook::getter_contact(i).getterDsecret() << std::endl;
			}
		}
	}
}
