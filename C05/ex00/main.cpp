/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:08:57 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/17 17:36:22 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat	person("mohammed", 10);
		std::cout << person << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}