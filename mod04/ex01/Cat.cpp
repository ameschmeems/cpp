/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:27:02 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 20:11:15 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat: default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	this->_brain = new Brain();
	*this = copy;
	std::cout << "Cat: copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat: destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &cat)
{
	delete this->_brain;
	this->_type = cat._type;
	this->_brain = new Brain(*cat._brain);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow meow" << std::endl;
}

std::string Cat::getIdea(int id)
{
	return (this->_brain->getIdea(id));
}

void Cat::setIdea(int id, std::string idea)
{
	this->_brain->setIdea(id, idea);
}
