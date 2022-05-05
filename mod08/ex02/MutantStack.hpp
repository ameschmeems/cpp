/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:38:53 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/05 10:36:30 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

#include <iostream>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
public:

	MutantStack(void) : std::stack<T>() {};
	MutantStack(const MutantStack &copy) {*this = copy;};
	virtual ~MutantStack(void) {};

	MutantStack &operator=(const MutantStack &ms)
	{
		std::stack<T>::operator=(ms);
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void) {return (std::stack<T>::c.begin());}
	iterator end(void) {return (std::stack<T>::c.end());}

private:
};

#endif
