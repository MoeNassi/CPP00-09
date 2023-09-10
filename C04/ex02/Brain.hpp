/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:30:06 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/08 16:00:58 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
	private:
		st_	ideas[100];
	public:
		Brain( void );
		Brain( st_ idea );
		void print() {
			for (int i = 0; i < 100; i++){
				std::cout << ideas[i] << std::endl;
			}
		}
		void set(std::string str) {
			
			for (int i = 0; i < 100; i++){
				 ideas[i] = str;
			}
		}
		Brain &operator=(const Brain &b);
		Brain( const Brain &copy );
		~Brain();
};

#endif