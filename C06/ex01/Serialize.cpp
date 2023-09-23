/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:21:39 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/23 16:37:27 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serializer::Serializer( void ) {
	
}

Serializer::Serializer( const Serializer &cpy ) {
	(void)cpy;
}

uintptr_t Serializer::serialize(Data* ptr) {
	if (!ptr)
		return (std::cout << "Error" << std::endl, 0);
	uintptr_t	casting;
	casting = reinterpret_cast<uintptr_t>(ptr);
	return (casting);
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data	*ayoo;
	ayoo = reinterpret_cast<Data*>(raw);
	return (ayoo);
}

Serializer::~Serializer( void ) {
	
}