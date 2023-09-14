/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:47:16 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/14 16:36:52 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("mohammed"), grade(0) {
	std::cout << "Default Bureaucrat Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat( const st_ name_, int grade_ ) : name(name_), grade(grade_) {
	std::cout << "Paramirized Bureaucrat Constructor Called" << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute(*this);
	}
	catch (std::exception &e) {
		std::cout << name << " didnt execute " << form.get_name() << std::endl;
		return ;
	}
	std::cout << name << " execute " << form.get_name() << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->grade = b.grade;
	return (*this);
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) {
	*this = copy;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Is Too Low");
}

void	Bureaucrat::signForm(AForm &grades) {
	try {
		grades.beSigned(*this);
	}
	catch(std::exception &e) {
		std::cout << BOLD_RED << this->get_name() << " couldn't sign " << grades.get_name() << " because " << e.what() << std::endl << RESET_COLOR;
		return ;
	}
	std::cout << BOLD_GREEN << this->get_name() << " sign " << grades.get_name() << std::endl << RESET_COLOR;
}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Is Too High");
}

void	Bureaucrat::set_grade( int grade_ ) {
	if (grade_ <= 0) 
		throw(GradeTooHighException());
	else if (grade_ > 150)
		throw(GradeTooLowException());
	else
		grade = grade_;
}

st_	Bureaucrat::get_name( void ) const {
	return (name);
}

int		Bureaucrat::get_grade( void ) const {
	return (grade);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Default Bureaucrat Destructor Called" << std::endl;
}