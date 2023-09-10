/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:42:32 by mnassi            #+#    #+#             */
/*   Updated: 2023/09/08 16:07:11 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta[20];
    int     index;
    
    index = -1;
    while (++index < 20)
    {
        if (index < 10)
            meta[index] = new Dog();
        else
            meta[index] = new Cat();
    }
    index = -1;
    while (++index < 20)
        delete meta[index];
}