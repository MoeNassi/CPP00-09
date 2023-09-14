/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:57:45 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/14 16:59:55 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#define st_	std::string

class Intern {
	private:
		st_		target;
	public:
		Intern( void );
		Intern( st_ target );
		Intern( const Intern &cpy );
		~Intern();
};

#endif