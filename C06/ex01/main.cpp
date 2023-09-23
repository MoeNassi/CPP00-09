/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:27:17 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/23 16:41:02 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main() {
	Data	*exp = new Data;
	exp->testing = "Heafadsfadsfasdllo";
	std::cout  << "before : " << exp->testing << std::endl;
	uintptr_t sto = Serializer::serialize(exp);
	exp = Serializer::deserialize(sto);
	std::cout  << "after : " << exp->testing << std::endl;
}