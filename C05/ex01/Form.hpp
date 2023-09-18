/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:37:39 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/17 17:40:30 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <cstdbool>
#include "Bureaucrat.hpp"

#define	st_ std::string

class Bureaucrat ;

class Form {
	private :
		st_ const name;
		bool	  sign;
		int const grade;
		int const exec;
	public :
		Form( void );
		Form( st_ name, int const grade_, int const exec_ );
		Form( const Form &cpy );
		Form &operator=(const Form &b);
		void beSigned(Bureaucrat &grades);
		st_	get_name( void ) const ;
		int	get_grade( void ) const ;
		int	get_exec( void ) const ;
		bool	get_sign( void ) const ;
		void	set_sign( bool check );
		~Form( void );
	class GradeTooHighException : public std::exception {
		public :
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public :
			virtual const char* what() const throw();
	};
	class AlreadySigned : public std::exception {
		public :
			virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream& os, const Form& dt);

#endif