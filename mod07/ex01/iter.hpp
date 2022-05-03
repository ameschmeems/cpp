/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:30:35 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/03 16:41:39 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template<typename T>
void iter(T *ptr, int len, void (*f)(T))
{
	for (int i = 0; i < len; i++)
		f(ptr[i]);
}

template<typename T>
void print(T a)
{
	std::cout << a << std::endl;
}

#endif
