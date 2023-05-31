/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 05:24:45 by mnassi            #+#    #+#             */
/*   Updated: 2023/05/31 05:16:51 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <chrono>
#include <thread>

class phonebook {
	private:
    	std::string	fname;
    	std::string	lname;
    	std::string	nname;
    	std::string	phone;
    	std::string	dark;

	public:
    	void constr(const std::string& firstn, const std::string& lastn, const std::string& nickname, std::string& number, const std::string& secret)
		{
       		fname = firstn;
        	lname = lastn;
        	nname = nickname;
        	phone = number;
        	dark = secret;
    	}
		void setName(const std::string& frst){
			if (!frst.empty())
				fname = frst;
		}
		void setLName(const std::string& sec){
			if (!sec.empty())
				lname = sec;
		}
		void setNName(const std::string& nick){
			if (!nick.empty())
				nname = nick;
		}
		void setPNumber(const std::string& number){
			if (!number.empty())
				phone = number;
		}
		void setSecret(const std::string& secr){
			if (!secr.empty())
				dark = secr;
		}
		int	incrementcontact(int i)
		{
			if (i <= 8)
				i++;
			return (i);
		}
	    std::string getfname() const {
    	    return fname;
    	}
		std::string getlname() const {
    	    return lname;
		}
		std::string getnname() const {
    	    return nname;
		}
		std::string getphone() const {
    	    return phone;
		}
		std::string getdar() const {
    	    return dark;
		}
};

#endif