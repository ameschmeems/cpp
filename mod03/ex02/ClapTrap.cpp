/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:14:22 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 12:33:43 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hp(10), _energy(10), _damage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _damage(0)
{
	std::cout << "String constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	*this = ct;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hp <= 0 || this->_energy <= 0)
	{
		std::cout << this->_name << " is unable to perform actions anymore" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target << ", causing " << _damage << " points of damage" << std::endl;
	this->_energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0 || this->_energy <= 0)
	{
		std::cout << this->_name << " is unable to perform actions anymore" << std::endl;
		return ;
	}
	std::cout << this->_name << " takes " << amount << " points of damage" << std::endl;
	this->_hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0 || this->_energy <= 0)
	{
		std::cout << this->_name << " is unable to perform actions anymore" << std::endl;
		return ;
	}
	std::cout << this->_name << " recovers " << amount << " hp" << std::endl;
	this->_hp += amount;
	this->_energy -= 1;
}
