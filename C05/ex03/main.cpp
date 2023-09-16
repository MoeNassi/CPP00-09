/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:08:57 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/16 16:47:05 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
	try {
		AForm* rrf;
		Intern someRandomIntern;
		Bureaucrat	ffs("mohammed", 25);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->execute(ffs);
		delete rrf;
	}
	catch (int) {
		return (0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}