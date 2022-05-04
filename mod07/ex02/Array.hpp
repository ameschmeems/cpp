/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:54:12 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/03 19:56:09 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <stdexcept>

template<typename T>
class Array
{
public:

	Array(void);
	Array(unsigned int n);
	Array(const Array<T> &copy);
	~Array(void);

	Array &operator=(const Array<T> &arr);
	T &operator[](unsigned int i);

	unsigned int size(void) const;

	class OutOfBoundsExcept : std::exception
	{
	public:

		virtual const char *what() const throw();
	};

private:

	T *_arr;
	unsigned int _size;
};

#include "Array.tpp"
#endif