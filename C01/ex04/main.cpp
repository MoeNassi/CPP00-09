/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 02:28:57 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/20 06:31:42 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#define	st_	std::string

void		location(char **args, std::ofstream &file, std::fstream &read) {
    std::string line;
	std::string	replace;
	std::string	search;

	replace = args[3];
	search = args[2];
    while (std::getline(read, line)) {
        size_t pos = 0;
        while ((pos = line.find(search, pos)) != std::string::npos) {
            line = line.substr(0, pos) + replace + line.substr(pos + search.length());
            pos += replace.length();
        }
        file << line << "\n";
    }
	file.close();
}

int main(int argc, char **args) {
	int				i;
	std::fstream	reading;
	st_				filename;
	st_				stock;

	filename = "replace.";
	std::ofstream	file(filename + args[1]);
	i = 0;
	if (argc != 4) {
		std::cout << "Not enough arguments" << std::endl;
		return (0);
	}
	reading.open( args[1] );
	if (!reading.is_open()) {
		std::cout << "Error in fd" << std::endl;
		return (0);
	}
	if (!file.is_open()) {
		std::cout << "Error in fd1" << std::endl;
		return (0);
	}
	location(args, file, reading);
	reading.close();
}