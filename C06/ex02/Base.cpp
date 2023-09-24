/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:27:01 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/24 15:08:19 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base  *Base::generate(void) {
	srand(time(0));
	if ((rand()) % 3 == 0)
		return (new A);
	else if ((rand()) % 3 == 1)
		return (new B);
	return (new C);
}

void	Base::identify(Base *p) {
	Base *tyca = dynamic_cast<A*>(p);
	if (tyca != NULL)
		std::cout << "pointer is type A" << std::endl;
	tyca = dynamic_cast<B*>(p);
	if (tyca != NULL)
		std::cout << "pointer is type B" << std::endl;
	tyca = dynamic_cast<C*>(p);
	if (tyca != NULL)
		std::cout << "pointer is type C" << std::endl;
}

void	Base::identify(Base &p) {
	try {
		Base &tyca = dynamic_cast<A&>(p);
		(void)tyca;
		std::cout << "reference is type A" << std::endl;
	}
	catch (std::exception &e) {

	}
	try {
		Base &tyca = dynamic_cast<B&>(p);
		(void)tyca;
		std::cout << "reference is type B" << std::endl;
	}
	catch (std::exception &e) {

	}
	try {
		Base &tyca = dynamic_cast<C&>(p);
		(void)tyca;
		std::cout << "reference is type C" << std::endl;
	}
	catch (std::exception &e) {

	}
}

Base::~Base(void) {
	std::cout << "Destructor Base Called" << std::endl;
}