/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 00:04:01 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/05 00:04:01 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{
	return ;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::Span(unsigned int N)
{
	try
	{
		if (this->_vect.max_size() >= N)
			this->_N = N;
		else
			throw Span::NoMemExcept();
	}
	catch(Span::NoMemExcept &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Span::~Span(void)
{
	this->_vect.clear();
}

Span &Span::operator=(const Span &s)
{
	if (!this->_vect.empty())
		this->_vect.clear();
	this->_N = s._N;
	if (s._N > 0)
	{
		for (unsigned int i = 0; i < s._N; i++)
			this->_vect.push_back(s._vect[i]);
	}
	return (*this);
}

void Span::addNumber(int i)
{
	try
	{
		if (this->_vect.size() >= this->_N)
			throw Span::OutOfBoundsExcept();
		this->_vect.push_back(i);
	}
	catch(const Span::OutOfBoundsExcept& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int Span::shortestSpan(void) const
{
	try
	{
		if (this->_vect.size() < 2)
			throw Span::SpanImpossibleExcept();
		int span = std::abs(this->_vect[0] - this->_vect[1]);
		for (unsigned int i = 0; i < this->_vect.size(); i++)
		{
			for (unsigned int j = i + 1; j < this->_vect.size(); j++)
			{
				if (std::abs(this->_vect[i] - this->_vect[j]) < span)
					span = std::abs(this->_vect[i] - this->_vect[j]);
			}
		}
		return (span);
	}
	catch(const Span::SpanImpossibleExcept &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
}

int Span::longestSpan(void) const
{
	try
	{
		if (this->_vect.size() < 2)
			throw Span::SpanImpossibleExcept();
		int span = std::abs(this->_vect[0] - this->_vect[1]);
		for (unsigned int i = 0; i < this->_vect.size(); i++)
		{
			for (unsigned int j = i + 1; j < this->_vect.size(); j++)
			{
				if (std::abs(this->_vect[i] - this->_vect[j]) > span)
					span = std::abs(this->_vect[i] - this->_vect[j]);
			}
		}
		return (span);
	}
	catch(const Span::SpanImpossibleExcept &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
}

void Span::addMany(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	try
	{
		for (; start < end; start++)
		{
			if (this->_vect.size() == this->_N)
				throw Span::OutOfBoundsExcept();
			this->_vect.push_back(*start);
		}
	}
	catch(const Span::OutOfBoundsExcept &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

unsigned int Span::getN(void) const
{
	return (this->_N);
}

const char *Span::OutOfBoundsExcept::what() const throw()
{
	return ("Number of elements exceeds max size");
}

const char *Span::NoMemExcept::what() const throw()
{
	return ("Not enough system memory");
}

const char *Span::SpanImpossibleExcept::what() const throw()
{
	return ("Span impossible with less than 2 elements");
}
