/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 05:19:15 by mnassi            #+#    #+#             */
/*   Updated: 2023/05/30 05:27:09 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

class phonebook {
	private:
    	std::string	fname;
    	std::string	lname;
    	std::string	nname;
    	int			phone;
    	std::string	dark;

	public:
    	phonebook(const std::string& firstn, const std::string& lastn, const std::string& nickname, int number, const std::string& secret) {
       		fname = firstn;
        	lname = lastn;
        	nname = nickname;
        	phone = number;
        	dark = secret;
    	}

	    std::string getfname() const {
    	    return fname;
    }
};

int main() {
    phonebook objectest("mohammed", "nassi", "mnassi", 618234576, "m9wda elia");
    std::cout << objectest.getfname() << std::endl;

    return 0;
}