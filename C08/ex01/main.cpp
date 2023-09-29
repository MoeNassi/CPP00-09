/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:35:08 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/29 19:12:39 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try {
		Span sp(3);
		// std::vector < int > arr_;
		// arr_.push_back(15);
		// arr_.push_back(165);
		// arr_.push_back(4);
		// arr_.push_back(12);
		// sp.addNumbers( arr_.begin(), arr_.end());
		sp.addNumber(1);
		sp.addNumber(12);
		sp.addNumber(2);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}