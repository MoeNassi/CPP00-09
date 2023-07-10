/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:14:09 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/10 03:44:19 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"


contacts::contacts() {

}
contacts::~contacts() {
	
}

void contacts::setterFname(st Fame) {
	Fname = Fame;
}
void contacts::setterSname(st Same) {
	Sname = Same;
}
void contacts::setterNname(st Name) {
	Nname = Name;
}
void contacts::setterPnumber(st phone) {
	Pnumber = phone;
}
void contacts::setterDsecret(st secret) {
	Dsecret = secret;
}
st contacts::getterFname() {
	return (Fname);
}
st contacts::getterSname() {
	return (Sname);
}
st contacts::getterNname() {
	return (Nname);
}
st contacts::getterPnumber() {
	return (Pnumber);
}
st contacts::getterDsecret() {
	return (Dsecret);
}