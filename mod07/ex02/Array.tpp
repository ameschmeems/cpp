/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:00:53 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/03 19:26:02 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _size(0), _arr(nullptr)
{
	return ;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _arr(new T[n])
{
	return ;
}

template<typename T>
Array<T>::Array(const Array<T> &copy) : _size(copy._size), _arr(nullptr)
{
	*this = copy;
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] this->_arr;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &arr)
{
	if (this->_arr)
	{
		delete [] this->_arr;
		this->_arr = nullptr;
	}
	this->_size = arr._size;
	if (arr._size > 0)
	{
		this->_arr = new T[arr._size];
		for (unsigned int i = 0; i < arr._size; i++)
			this->_arr[i] = arr._arr[i];
	}
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i > this->_size - 1)
		throw Array<T>::OutOfBoundsExcept();
	return (this->_arr[i]);
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_size);
}

template<typename T>
const char *Array<T>::OutOfBoundsExcept::what() const throw()
{
	return ("Index is out of bounds");
}
