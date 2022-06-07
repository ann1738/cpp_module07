/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:10:43 by anasr             #+#    #+#             */
/*   Updated: 2022/06/07 14:21:55 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <exception>

int main(void)
{
	try
	{
		std::cout << "\e[35mExample with int\e[0m\n";
		int a[9] = {1, 2, 3, 4, 5, 6, 7, 8 ,9};
		iter(a, 9, printArray);
		
		std::cout << "\n\e[35mExample with char\e[0m\n";
		char c[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
		iter(c, 9, printArray);

		std::cout << "\n\e[35mExample with strings\e[0m\n";
		std::string str[5] = {"first", "second", "third", "fourth", "fifth"};
		iter(str, 5, printArray);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}		
}
