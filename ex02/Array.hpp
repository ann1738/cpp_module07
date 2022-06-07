/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:11:07 by anasr             #+#    #+#             */
/*   Updated: 2022/06/07 15:27:05 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T	*array;
	unsigned int _size;
public:
	Array() : array(NULL) {}

	Array(unsigned int n) : _size(n)
	{
		array = new T[n];
	}

	Array(const Array &rhs) : _size(rhs._size)
	{
		this->array = new T[rhs._size];
		for (unsigned int i = 0; i < _size; ++i) this->array[i] = rhs.array[i];
	}

	Array& operator=(const Array &rhs)
	{
		if (this != &rhs)
		{
			this->_size = rhs._size;
			this->array = new T[rhs._size];
			for (unsigned int i = 0; i < _size; ++i) this->array[i] = rhs.array[i];
		}
		return (*this);
	}

	T& operator[](unsigned int i) {if (i < this->_size){return (array[i]);} throw (std::out_of_range("\e[31mOut of range error\e[0m"));}

	~Array() {if (array) delete[] array;}

	unsigned int	size(void){return (this->_size);}
};

template<typename T>
void	printArray(T &array)
{
	for (unsigned int i = 0; i < array.size(); ++i)
		std::cout << array[i] << " \n";
}

#endif
