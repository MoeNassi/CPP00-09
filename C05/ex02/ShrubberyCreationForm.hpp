/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:32:48 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/14 16:42:01 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class Shrubbery : public AForm {
	private :
		st_	target;
	public :
		Shrubbery( void );
		Shrubbery( st_ target );
		Shrubbery( const Shrubbery &cpy );
		Shrubbery &operator=(const Shrubbery &b);
		void	execute( Bureaucrat const &executor ) const;
		~Shrubbery( void );
};

#endif