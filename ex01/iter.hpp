/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:17:05 by anasr             #+#    #+#             */
/*   Updated: 2022/06/01 17:45:34 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	add(T &a)
{
	a++;
}

template <typename T>
void	iter(T *array,  size_t len, void(*func)(T&))
{
	for (size_t i = 0; i < len; ++i)
		func(array[i]);
}

#endif