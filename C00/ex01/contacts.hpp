/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 05:06:26 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/10 04:25:15 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#define st std::string

class contacts {
	private :
		st Fname;
		st Sname;
		st Nname;
		st Pnumber;
		st Dsecret;
	public :
		contacts();
		st getterFname();
		st getterSname();
		st getterNname();
		st getterPnumber();
		st getterDsecret();

		void setterFname(st Fame);
		void setterSname(st Same);
		void setterNname(st Name);
		void setterPnumber(st phone);
		void setterDsecret(st secret);
	~contacts();
};

#endif