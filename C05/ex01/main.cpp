/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:08:57 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/17 17:41:47 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat	person("mohammed", 15);
	Form	person1("joel", 14, 1);
	/*-----------Too High exception-----------*/
	try {
		person.set_grade(0);
	}
	catch (std::exception &e) {
		std::cout << BOLD_RED << e.what() << RESET_COLOR << std::endl;
	}
	/*-----------Too Low exception-----------*/
	try {
		person.set_grade(151);
	}
	catch (std::exception &e) {
		std::cout << BOLD_RED << e.what() << RESET_COLOR << std::endl;
	}
	/*-----------couldn't sign-----------*/
	person.signForm(person1);
}