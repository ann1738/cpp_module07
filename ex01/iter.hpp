/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:17:05 by anasr             #+#    #+#             */
/*   Updated: 2022/06/07 14:21:47 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	printArray(T const &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	iter(T *array,  unsigned int len, void(*func)(T const &))
{
	for (size_t i = 0; i < len; ++i)
		func(array[i]);
}

#endif
