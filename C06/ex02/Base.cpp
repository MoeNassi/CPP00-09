/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:27:01 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/23 18:47:45 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base  *Base::generate(void) {
	srand(time(0));
	int random = rand() % 100;
	if (random > 0 && random <= 200)
		return (new A);
	else if (random > 201 && random <= 300)
		return (new B);
	else if (random > 301 && random <= 400)
		return (new C);
	return (NULL);
}

void Base::printl() {
	std::cout << "Its Base" << std::endl;
}

Base::~Base(void) {
	std::cout << "Destructor Base Called" << std::endl;
}