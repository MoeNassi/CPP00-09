/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 05:06:26 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/06 06:00:29 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>

class contacts {
	private :
		std::string Fname;
		std::string Sname;
		std::string Nname;
		std::string Pnumber;
		std::string Dsecret;
	public : 
		contacts() {};
		void setterFname(std::string &Fame) {
			Fname = Fame;
		}
		void setterSname(std::string &Same) {
			Sname = Same;
		}
		void setterNname(std::string &Name) {
			Nname = Name;
		}
		void setterPnumber(std::string &phone) {
			Pnumber = phone;
		}
		void setterDsecret(std::string &secret) {
			Dsecret = secret;
		}
		std::string getterFname() {
			return (Fname);
		}
		std::string getterSname() {
			return (Sname);
		}
		std::string getterNname() {
			return (Nname);
		}
		std::string getterPnumber() {
			return (Pnumber);
		}
		std::string getterDsecret() {
			return (Dsecret);
		}
};

#endif