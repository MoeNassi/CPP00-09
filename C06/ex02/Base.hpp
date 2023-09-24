/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:27:52 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/24 15:20:34 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
	public :
		static Base  *generate(void);
		void	identify(Base *p);
		void	identify(Base &p);
		virtual ~Base( void );
};

#endif