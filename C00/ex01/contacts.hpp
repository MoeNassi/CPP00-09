/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 05:06:26 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/09 01:46:54 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class contacts {
	private :
		std::string Fname;
		std::string Sname;
		std::string Nname;
		std::string Pnumber;
		std::string Dsecret;
	public : 
		std::string getterFname();
		std::string getterSname();
		std::string getterNname();
		std::string getterPnumber();
		std::string getterDsecret();

		void setterFname(std::string Fame);
		void setterSname(std::string Same);
		void setterNname(std::string Name);
		void setterPnumber(std::string phone);
		void setterDsecret(std::string secret);
	~contacts() {};
};

#endif