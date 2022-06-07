/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:45:09 by anasr             #+#    #+#             */
/*   Updated: 2022/06/07 15:43:35 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	try
	{
		{
			std::cout << "\e[33m***** TEST 1: *****\e[0m\n";
			
			Array<int> intArray(10);
			for (unsigned int i = 0; i < intArray.size(); ++i)
				intArray[i] = 0;
			for (unsigned int i = 0; i < intArray.size(); ++i)
				std::cout << intArray[i] << " \n";
		}
		{
			std::cout << "\n\e[33m***** TEST 2: *****\e[0m\n";
			Array<double> doubleArray(10);
			for (unsigned int i = 0; i < doubleArray.size(); ++i)
				doubleArray[i] = 65.42;
			for (unsigned int i = 0; i < doubleArray.size(); ++i)
				std::cout << doubleArray[i] << " \n";
		}
		{
			std::cout << "\n\e[33m***** TEST 3: *****\e[0m\n";
			
			std::cout << "\e[36mConstructing an array object and assigning to it 'Z'\e[0m\n";
			Array<char> charArray(10);
			for (unsigned int i = 0; i < charArray.size(); ++i)
				charArray[i] = 'Z';
			std::cout << "\e[36mConstructing a copy of the first constructor and assigning to it 'A'\e[0m\n";
			Array<char> copy(charArray);
			for (unsigned int i = 0; i < copy.size(); ++i)
				copy[i] = 65;
			
			std::cout << "\e[36mConstructing a copy of the first constructor (through assignment operator) and assigning to it '*'\e[0m\n\n";
			Array<char> equal;
			equal = charArray;
			for (unsigned int i = 0; i < equal.size(); ++i)
				equal[i] = 42;
		
			std::cout << "\e[34mDisplaying the elements of the copied array\e[0m\n";
			for (unsigned int i = 0; i < copy.size(); ++i)
				std::cout << copy[i] << " \n";
			std::cout << "\e[34mDisplaying the elements of the copied (through assignment operator) array\e[0m\n";
			for (unsigned int i = 0; i < equal.size(); ++i)
				std::cout << equal[i] << " \n";
			std::cout << "\e[34mDisplaying the elements of the original array\e[0m\n";
			for (unsigned int i = 0; i < charArray.size(); ++i)
				std::cout << charArray[i] << " \n";
		}
		{
			std::cout << "\n\e[33m***** TEST 4: out of bounds *****\e[0m\n";
			
			Array<std::string> strArray(10);
			std::cout << "\e[32mThis string array is of size "<< strArray.size() << "\e[0m\n";
			for (unsigned int i = 0; i < strArray.size(); ++i)
				strArray[i] = "STRINGS";
			for (unsigned int i = 0; i < strArray.size() + 1; ++i)
				std::cout << strArray[i] << " \n";
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


/* ***** MAIN PROVIDED FROM INTRA ***** */
// #include <iostream>
// #include <stdlib.h> 
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
