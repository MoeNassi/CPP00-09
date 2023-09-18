/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:37:39 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/13 15:39:59 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <cstdbool>
#include "Bureaucrat.hpp"

#define	st_ std::string

class Bureaucrat ;

class AForm {
	private :
		st_ const name;
		bool	  sign;
		int	const  exec;
		int const grade;
	public :
		AForm( void );
		AForm( st_ name, int const grade, int const exec_ );
		AForm( const AForm &cpy );
		AForm &operator=(const AForm &b);
		void beSigned(Bureaucrat &grades);
		st_	get_name( void ) const ;
		int	get_grade( void ) const ;
		int	get_exec( void ) const ;
		bool	get_sign( void ) const ;
		void	set_sign( bool check );
		virtual void	execute( Bureaucrat const &executor ) const = 0;
		virtual ~AForm( void );
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

std::ostream &operator<<(std::ostream& os, const AForm& dt);

#endif