/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 05:41:11 by mnassi            #+#    #+#             */
/*   Updated: 2023/07/18 04:06:54 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#define st_ std::string

int main() {
	st_ 	str = "HI THIS IS BRAIN";
	st_		*stringPTR = &str;
	st_		&stringREF = str;

	std::cout << "Address : " << &str << std::endl;
	std::cout << "Address : " << stringPTR << std::endl;
	std::cout << "Address : " << &stringREF << std::endl;
	std::cout << "Value : " << str << std::endl;
	std::cout << "Value : " << *stringPTR << std::endl;
	std::cout << "Value : " << stringREF << std::endl;
}