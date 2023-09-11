/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:08:57 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/10 18:54:55 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat	person("mohammed", 15);
	person.set_grade(-12);
	std::cout << person.get_name() << " grade : " << person.get_grade() << std::endl;
}