/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:14:09 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/09 01:45:27 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

void contacts::setterFname(std::string Fame) {
	Fname = Fame;
}
void contacts::setterSname(std::string Same) {
	Sname = Same;
}
void contacts::setterNname(std::string Name) {
	Nname = Name;
}
void contacts::setterPnumber(std::string phone) {
	Pnumber = phone;
}
void contacts::setterDsecret(std::string secret) {
	Dsecret = secret;
}
std::string contacts::getterFname() {
	return (Fname);
}
std::string contacts::getterSname() {
	return (Sname);
}
std::string contacts::getterNname() {
	return (Nname);
}
std::string contacts::getterPnumber() {
	return (Pnumber);
}
std::string contacts::getterDsecret() {
	return (Dsecret);
}