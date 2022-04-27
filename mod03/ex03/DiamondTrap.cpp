/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:33:38 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 16:11:23 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "default";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->FragTrap::setDamage();
	this->FragTrap::setHitPoints();
	this->ScavTrap::setEnergy();
	std::cout << "DiamondTrap: default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	std::cout << "DiamondTrap: copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->FragTrap::setDamage();
	this->FragTrap::setHitPoints();
	this->ScavTrap::setEnergy();
	std::cout << "DiamondTrap: string constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dt)
{
	*this = dt;
	return (*this);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "My ClapTrap name is " << this->ClapTrap::_name << std::endl;
	std::cout << "My DiamondTrap name is " << this->_name << std::endl;
}

int DiamondTrap::getHitPoints(void) const
{
	return (this->_hp);
}

int DiamondTrap::getEnergy(void) const
{
	return (this->_energy);
}
