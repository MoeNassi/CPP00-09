/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:42:32 by mnassi            #+#    #+#             */
/*   Updated: 2023/08/30 17:31:24 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta[8];
    int     index;
    
    index = -1;
    while (++index < 8)
    {
        if (index < 4)
            meta[index] = new Dog();
        else
            meta[index] = new Cat();
    }
    *meta[0] = *meta[7];
    index = -1;
    while (++index < 8)
        delete meta[index];
}