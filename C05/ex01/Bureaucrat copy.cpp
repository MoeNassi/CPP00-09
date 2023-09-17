/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:47:16 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/17 16:59:55 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("mohammed"), grade(0) {
	std::cout << "Default Bureaucrat Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat( const st_ name_, int grade_ ) : name(name_), grade(grade_) {
	std::cout << "Parametrized Bureaucrat Constructor Called" << std::endl;
	if (grade_ <= 0) 
		throw(GradeTooHighException());
	if (grade_ > 150)
		throw(GradeTooLowException());
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
	if (grade_ <= 0) 
		throw(GradeTooHighException());
	else if (grade_ > 150)
		throw(GradeTooLowException());
	else
		grade = grade_;
}

const st_	Bureaucrat::get_name( void ) const {
	return (name);
}

int		Bureaucrat::get_grade( void ) const {
	return (grade);
}

void	Bureaucrat::increment() {
	int		stock = 0;
	stock = this->grade - 1;
	if (stock <= 0)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade = stock;
}

void	Bureaucrat::decrement() {
	int		stock = 0;
	stock = this->grade + 1;
	if (stock > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade = stock;
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat& dt) {
	os << dt.get_name() << ", bureaucrat grade " << dt.get_grade();
	return (os);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Default Bureaucrat Destructor Called" << std::endl;
}