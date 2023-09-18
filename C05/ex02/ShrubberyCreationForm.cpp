/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:32:40 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/17 17:49:11 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery() : AForm("Default", 145, 137), target("Default")  {
	std::cout << "Shrubbery Default Constructor Called" << std::endl;
}

Shrubbery::Shrubbery( st_ target_ ) : AForm(target_, 145, 137), target(target_) {
	std::cout << "Shrubbery Default Constructor Called" << std::endl;
}

Shrubbery::Shrubbery( const Shrubbery &cpy ) {
	std::cout << "Shrubbery copy constructor called" << std::endl;
	*this = cpy;
}

Shrubbery &Shrubbery::operator=(const Shrubbery &b) {
	std::cout << "Shrubbery Copy assignment operator called" << std::endl;
	this->target = b.target;
	return (*this);
}

void	Shrubbery::execute( Bureaucrat const &executor ) const {
	if (!get_sign() && executor.get_grade() > get_grade())
		throw(GradeTooLowException());
	std::ofstream	file(target + "_shrubbery");
	if (!file.is_open()) {
		std::cout << "Fd Error" << std::endl;
		return ;
	}
	file << "    *" << std::endl;
	file <<	"   /|\\" << std::endl;
	file <<	"  //|\\\\" << std::endl;
	file << " ///|\\\\\\" << std::endl;
	file <<	"////|\\\\\\\\" << std::endl;
	file <<	"    |";
	file.close();
}

Shrubbery::~Shrubbery() {
	std::cout << "Shrubbery Destructor Called" << std::endl;
}