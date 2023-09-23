/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:22:03 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/23 16:31:50 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <inttypes.h>

struct	Data {
	std::string		testing;
};

class	Serializer {
	private :
		Serializer( void );
		Serializer( const Serializer &cpy );
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		~Serializer( void );
};

#endif