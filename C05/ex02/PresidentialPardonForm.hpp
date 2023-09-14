/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:41:12 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/14 16:41:27 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class Presidential : public AForm {
	private :
		st_	target;
	public :
		Presidential( void );
		Presidential( st_ target );
		Presidential &operator=(const Presidential &b);
		Presidential( const Presidential &copy );
		void	execute( Bureaucrat const &executor ) const ;
		~Presidential( void );
};

#endif