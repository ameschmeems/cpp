/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:07:59 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 11:14:40 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap: default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap: copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::FragTrap(const std::string name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	this->_name = name;
	std::cout << "FragTrap: string constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ft)
{
	this->_name = ft._name;
	this->_hp = ft._hp;
	this->_energy = ft._energy;
	this->_damage = ft._damage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is requesting high fives" << std::endl;
}
