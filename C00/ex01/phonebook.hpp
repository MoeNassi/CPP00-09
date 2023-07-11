/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 05:24:45 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/11 09:13:41 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "contacts.hpp"
#include <string>
#define st std::string

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"

class phonebook {
	private : 
		contacts contact[8];
	public : 
		phonebook();
		contacts	getter_contact(int i);
		void		contact_setf(st fn, int i);
		void		contact_setl(st ln, int i);
		void		contact_setn(st nn, int i);
		void		contact_setp(st pn, int i);
		void		contact_setd(st ds, int i);
	~phonebook();
};

int		add_contact(phonebook *div, int i);
void	search_contact(phonebook *div, int ch);

#endif