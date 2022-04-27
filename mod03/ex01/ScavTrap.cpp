/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:56:01 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 12:26:28 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap: default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap: copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_name = name;
	std::cout << "ScavTrap: string constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st)
{
	*this = st;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	if (this->_hp <= 0 || this->_energy <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is unable to perform actions anymore" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
	this->_energy -= 1;
}
