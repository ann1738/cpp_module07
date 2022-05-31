/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:17:05 by anasr             #+#    #+#             */
/*   Updated: 2022/05/31 18:27:46 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *array,  size_t len, (*void)(func)(T elem))
{
	for (size_t i = 0; i < len; ++i)
		func(array[i]);
}

#endif