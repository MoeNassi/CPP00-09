/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:24:11 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/10 18:45:43 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RESET_COLOR "\033[0m"
#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

#define BOLD_BLACK "\033[1;30m"
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_YELLOW "\033[1;33m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_PURPLE "\033[1;35m"
#define BOLD_CYAN "\033[1;36m"
#define BOLD_WHITE "\033[1;37m"
#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#define	st_ std::string

class Bureaucrat {
	private :
		st_ const  name;
		int		  grade;
	public :
		Bureaucrat( void );
		Bureaucrat( st_ const name, int grade );
		Bureaucrat &operator=(const Bureaucrat &b);
		void	set_grade( int grade_ );
		st_ const	get_name( void ) const ;
		int		get_grade( void ) const ;
		Bureaucrat( const Bureaucrat &copy );
		~Bureaucrat( void );

	/*-------------------nested classes-------------------*/
	class	GradeTooHighException : public std::exception {
		public :
			virtual const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception {
		public :
			virtual const char* what() const throw();
	};
};

#endif