/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:37:29 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/13 15:00:02 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm &AForm::operator=(const AForm &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->sign = b.sign;
	return (*this);
}

AForm::AForm( void ) : name("Default"), sign(false), exec(0), grade(0) {
	std::cout << "Default Constructor Called <<AForm>>" << std::endl;
}

AForm::AForm( const AForm &cpy ) : sign(false), exec(cpy.exec), grade(cpy.grade) {
	std::cout << "Default copy Constructor Called <<AForm>>" << std::endl;
	*this = cpy;
}

AForm::AForm( st_ name_, int const grade_, int const exec_  ) : name(name_), sign(false), exec(exec_), grade(grade_) {
	std::cout << "Constructor Called <<AForm>>" << std::endl;
	if (grade > 150)
		throw(GradeTooLowException());
	else if (grade <= 0)
		throw(GradeTooHighException());
}

int	AForm::get_exec( void ) const {
	return (exec);
}

st_	AForm::get_name( void ) const {
	return (name);
}

int	AForm::get_grade( void ) const {
	return (grade);
}

bool	AForm::get_sign( void ) const {
	return (sign);
}

void	AForm::set_sign( bool check ) {
	sign = check;
}

void	AForm::beSigned(Bureaucrat &grades) {
	if (this->get_sign())
		throw (AForm::AlreadySigned());
	else if (grades.get_grade() < this->get_grade())
		throw (AForm::GradeTooHighException());
	else 
		this->set_sign(true);
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Grade too High");
}

const char *AForm::AlreadySigned::what() const throw() {
	return ("Already Signed");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Grade too Low");
}

std::ostream &operator<<(std::ostream& os, const AForm& dt) {
	os << dt.get_name() << ", AForm grade : " << dt.get_grade() << std::endl;
	return (os);
}

AForm::~AForm( void ) {
	std::cout << "Destructor Called <<AForm>>" << std::endl;
}