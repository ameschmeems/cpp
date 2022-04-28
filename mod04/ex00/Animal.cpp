/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:52:36 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 12:43:06 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("default")
{
	std::cout << "WrongAnimal: default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	this->_type = animal._type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "You're not supposed to do this..." << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
