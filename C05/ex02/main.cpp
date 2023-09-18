/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:08:57 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/17 17:44:36 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat	pr("m", 25);
	AForm	*pt = new Shrubbery("mohammed");
	AForm	*pts = new Robotomy("mohammed");
	AForm	*pte = new Presidential("mohammed");
	pr.executeForm(*pt);
	pr.executeForm(*pts);
	pr.executeForm(*pte);
}