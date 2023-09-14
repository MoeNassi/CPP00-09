/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:29:26 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/14 16:42:00 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOOTOMYREQUESTFORM_HPP
#define ROBOOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class Robotomy : public AForm {
	private :
		st_ target;
	public :
		Robotomy( void );
		Robotomy( st_ target_ );
		Robotomy( const Robotomy &cpy );
		Robotomy &operator=(const Robotomy &b);
		void	execute( Bureaucrat const &executor ) const;
		~Robotomy( void );
};

#endif