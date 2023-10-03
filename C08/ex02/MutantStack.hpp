/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:19:46 by mnassi            #+#    #+#             */
/*   Updated: 2023/10/02 15:32:27 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <iterator>

template < typename T >

class MutantStack : public std::stack < T, std::vector < T > > {
	public :
		typedef typename std::vector < T >::iterator iterator;
		typedef typename std::vector < T >::reverse_iterator reverse_iterator;
		MutantStack( void ) {
			
		}
		iterator	begin() {
			return (this->c.begin());
		}
		iterator	end() {
			return (this->c.end());
		}
		reverse_iterator	rbegin() {
			return (this->c.rbegin());
		}
		reverse_iterator	rend() {
			return (this->c.rend());
		}
		MutantStack( const MutantStack &cpy ) {
			this->iterator = cpy.iterator;
			this->reverse_iterator = cpy.reverse_iterator;
		}
		~MutantStack( void ) {
			
		}
};

#endif