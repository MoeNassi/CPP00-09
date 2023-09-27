/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:53:14 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/27 16:33:18 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    try {
		std::array<int, 6> ar = {21, 3, 6, 9, 12};
        int result = easyfind(ar, 12);
        std::cout << "Number found at index: " << result << std::endl;
    } catch (int) {
        std::cout << "Number on the array is not found" << std::endl;
    }

    return 0;
}