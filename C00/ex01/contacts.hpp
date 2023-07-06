/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 05:06:26 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/06 05:47:20 by mnassi           ###   ########.fr       */
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
		std::string getterFname() {
			return (Fname);
		}
		std::string getterSname() {
			return (Sname);
		}
		std::string getterNname() {
			return (Nname);
		}
};

#endif