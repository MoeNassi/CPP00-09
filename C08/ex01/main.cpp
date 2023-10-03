/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:35:08 by mnassi            #+#    #+#             */
/*   Updated: 2023/10/03 16:46:31 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try {
		Span sp(3);
		std::vector < int > arr_;
		arr_.push_back(15);
		arr_.push_back(165);
		arr_.push_back(4);
		sp.addNumbers( arr_.begin(), arr_.end());
		sp.get_nB();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}