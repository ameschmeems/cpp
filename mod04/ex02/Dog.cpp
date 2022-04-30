/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:05:22 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 20:10:44 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog: default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	this->_brain = new Brain();
	*this = copy;
	std::cout << "Dog: copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog: destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &dog)
{
	delete this->_brain;
	this->_brain = new Brain(*dog._brain);
	this->_type = dog._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
}

std::string Dog::getIdea(int id)
{
	return (this->_brain->getIdea(id));
}

void Dog::setIdea(int id, std::string idea)
{
	this->_brain->setIdea(id, idea);
}
