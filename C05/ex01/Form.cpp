/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:37:29 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/17 17:41:17 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form &Form::operator=(const Form &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->sign = b.sign;
	return (*this);
}

Form::Form( void ) : name("Default"), sign(false), grade(0), exec(0) {
	std::cout << "Default Constructor Called <<Form>>" << std::endl;
}

Form::Form( const Form &cpy ) : grade(cpy.grade), exec(cpy.exec) {
	std::cout << "Default copy Constructor Called <<Form>>" << std::endl;
	*this = cpy;
}

Form::Form( st_ name_, int const grade_, int const exec_ ) : name(name_), sign(false), grade(grade_), exec(exec_) {
	std::cout << "Constructor Called <<Form>>" << std::endl;
	if (grade > 150)
		throw(GradeTooLowException());
	else if (grade <= 0)
		throw(GradeTooHighException());
}

st_	Form::get_name( void ) const {
	return (name);
}

int	Form::get_grade( void ) const {
	return (grade);
}

int	Form::get_exec( void ) const {
	return (exec);
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

std::ostream &operator<<(std::ostream& os, const Form& dt) {
	os << dt.get_name() << ", Form grade : " << dt.get_grade() << std::endl;
	return (os);
}

Form::~Form( void ) {
	std::cout << "Destructor Called <<Form>>" << std::endl;
}