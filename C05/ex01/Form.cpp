/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:37:29 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/11 18:53:38 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"



Form &Form::operator=(const Form &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	(void)b;
	return (*this);
}

Form::Form( void ) : name("Default"), grade(0) {
	std::cout << "Default Constructor Called <<Form>>" << std::endl;
}

Form::Form( const Form &cpy ) {
	std::cout << "Default copy Constructor Called <<Form>>" << std::endl;
	*this = cpy;
}

Form::Form( st_ name_, int grade_ ) : name(name_), grade(grade_) {
	std::cout << "Constructor Called <<Form>>" << std::endl;
}

st_	Form::get_name( void ) const {
	return (name);
}

int	Form::get_grade( void ) const {
	return (grade);
}

bool	Form::get_sign( void ) const {
	return (sign);
}

void	Form::set_sign( bool check ) {
	sign = check;
}

void	Form::beSigned(Bureaucrat &grades) {
	if (this->get_sign())
		throw (Form::AlreadySigned());
	else if (grades.get_grade() < this->get_grade())
		throw (Form::GradeTooHighException());
	else 
		this->set_sign(true);
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade too High");
}

const char *Form::AlreadySigned::what() const throw() {
	return ("Already Signed");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade too Low");
}

Form::~Form( void ) {
	std::cout << "Destructor Called <<Form>>" << std::endl;
}