/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:41:14 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 12:46:55 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat: default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << "WrongCat: copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
	this->_type = cat._type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow meow" << std::endl;
}
