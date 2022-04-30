/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:52:36 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 20:17:20 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("default")
{
	std::cout << "AAnimal: default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "AAnimal: copy constructor called" << std::endl;
	*this = copy;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal: destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &animal)
{
	this->_type = animal._type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}
