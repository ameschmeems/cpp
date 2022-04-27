/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:10:51 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 11:37:58 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fp_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fp_value = (i << this->_bits);
}

Fixed::Fixed(const float i)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fp_value = roundf(i * (1 << this->_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fp_value = f._fp_value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fp_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)(this->_fp_value) / (float)(1 << this->_bits));
}

int Fixed::toInt(void) const
{
	return (this->_fp_value >> this->_bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &num)
{
	os << num.toFloat();
	return (os);
}
