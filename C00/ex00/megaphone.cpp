/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:37:19 by mnassi            #+#    #+#             */
/*   Updated: 2023/05/30 02:15:44 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int count, char **strings)
{
	int		j;

	if (count == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	for (int i = 1; strings[i]; i++)
	{
		for (j = 0; strings[i][j]; j++)
		{
			if (strings[i][j] >= 'a' && strings[i][j] <= 'z')
				strings[i][j] -= 32;
			std::cout << strings[i][j];
		}
	}
	return (0);
}
