/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:48:50 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/16 16:40:55 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::Zombie(void) : _name("default")
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " was destroyed" << std::endl;
	return ;
}

void Zombie::set_name(std::string name)
{
	_name = name;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
