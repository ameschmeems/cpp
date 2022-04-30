/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:10:34 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 19:17:57 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Brain: copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain: destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return (*this);
}

std::string Brain::getIdea(int id)
{
	return (this->_ideas[id]);
}

void Brain::setIdea(int id, std::string idea)
{
	this->_ideas[id] = idea;
}
