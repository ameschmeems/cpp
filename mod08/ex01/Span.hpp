/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 00:03:59 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/05 00:03:59 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

class Span
{
public:

	Span(void);
	Span(const Span &copy);
	Span(unsigned int N);
	~Span(void);

	Span &operator=(const Span &s);

	void addNumber(int i);
	int shortestSpan(void) const;
	int longestSpan(void) const;
	void addMany(std::vector<int>::iterator start, std::vector<int>::iterator end);
	unsigned int getN(void) const;

	class NoMemExcept : std::exception
	{
	public:
		const char *what() const throw();
	};
	class OutOfBoundsExcept : std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class SpanImpossibleExcept : std::exception
	{
	public:
		virtual const char *what() const throw();
	};

private:

	std::vector<int> _vect;
	unsigned int _N;
};

std::ostream &operator<<(std::ostream &os, const Span &s);

#endif
