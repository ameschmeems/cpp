/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:38:43 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/04 15:27:40 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_H
# define EASY_FIND_H

#include <vector>
#include <algorithm>
#include <stdexcept>

class NotFoundExcept : public std::exception
{
public:
	virtual const char *what() const throw();
};

template<typename T>
typename T::iterator easyfind(T &t, int i)
{
	typename T::iterator it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw NotFoundExcept();
	return (it);
}

#endif
