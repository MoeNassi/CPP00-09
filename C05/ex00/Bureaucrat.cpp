/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:47:16 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/10 18:53:45 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("mohammed"), grade(0) {
	std::cout << "Default Bureaucrat Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat( const st_ name_, int grade_ ) : name(name_), grade(grade_) {
	std::cout << "Paramirized Bureaucrat Constructor Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b) {
		this->grade = b.grade;
	}
	return (*this);
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) {
	*this = copy;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Is Too Low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Is Too High");
}

void	Bureaucrat::set_grade( int grade_ ) {
	grade = grade_;
	try {
		if (grade_ <= 0) {
			throw(GradeTooHighException());
		}
		grade = grade_;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		if (grade_ > 150) {
			throw(GradeTooLowException());
		}
		grade = grade_;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

const st_	Bureaucrat::get_name( void ) const {
	return (name);
}

int		Bureaucrat::get_grade( void ) const {
	return (grade);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Default Bureaucrat Destructor Called" << std::endl;
}