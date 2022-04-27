/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:10:51 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 11:44:47 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fp_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fp_value = i << this->_bits;
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

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fp_value = copy.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &f) const
{
	Fixed retval(*this);
	retval.setRawBits(this->getRawBits() + f.getRawBits());
	return (retval);
}

Fixed Fixed::operator-(const Fixed &f) const
{
	Fixed retval(*this);
	retval.setRawBits(this->getRawBits() - f.getRawBits());
	return (retval);
}

Fixed Fixed::operator*(const Fixed &f) const
{
	Fixed retval = Fixed(*this);
	retval.setRawBits(this->getRawBits() * f.getRawBits() / (1 << this->_bits));
	return (retval);
}

Fixed Fixed::operator/(const Fixed &f) const
{
	Fixed retval = Fixed(*this);
	if (f.getRawBits() != 0)
		retval.setRawBits(this->getRawBits() * (1 << this->_bits) / f.getRawBits());
	else
		std::cout << "Error: division by 0" << std::endl;
	return (retval);
}

Fixed Fixed::operator++(int)
{
	Fixed retval = Fixed(*this);
	this->_fp_value += 1;
	return (retval);
}

Fixed &Fixed::operator++(void)
{
	this->_fp_value += 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed retval = Fixed(*this);
	this->_fp_value -= 1;
	return (retval);
}

Fixed &Fixed::operator--(void)
{
	this->_fp_value -= 1;
	return (*this);
}

bool Fixed::operator>(const Fixed &f) const
{
	return (this->getRawBits() > f.getRawBits());
}

bool Fixed::operator<(const Fixed &f) const
{
	return (this->getRawBits() < f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f) const
{
	return (this->getRawBits() >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f) const
{
	return (this->getRawBits() <= f.getRawBits());
}

bool Fixed::operator==(const Fixed &f) const
{
	return (this->getRawBits() == f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f) const
{
	return (this->getRawBits() != f.getRawBits());
}

int Fixed::getRawBits(void) const
{
	return (this->_fp_value);
}

void Fixed::setRawBits(int const raw)
{
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

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	else
		return (f2);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	else
		return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	else
		return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	else
		return (f2);
}

std::ostream &operator<<(std::ostream &os, const Fixed &num)
{
	os << num.toFloat();
	return (os);
}
