/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:10:43 by anasr             #+#    #+#             */
/*   Updated: 2022/06/01 17:52:43 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <exception>

# define ARRAY_SIZE 9

int main(void)
{
	try
	{
		int a[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8 ,9};

		std::cout << "BEFORE iter\n";
		for (int i = 0; i < ARRAY_SIZE; ++i)
			std::cout << a[i] << std::endl;
		iter(a, ARRAY_SIZE, add);
		std::cout << "AFTER iter\n";
		for (int i = 0; i < ARRAY_SIZE; ++i)
			std::cout << a[i] << std::endl;
		
		char c[ARRAY_SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};

		std::cout << "BEFORE iter\n";
		for (int i = 0; i < ARRAY_SIZE; ++i)
			std::cout << c[i] << std::endl;
		iter(c, ARRAY_SIZE, add);
		std::cout << "AFTER iter\n";
		for (int i = 0; i < ARRAY_SIZE; ++i)
			std::cout << c[i] << std::endl;
		
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
		
}