/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:14:18 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 16:13:30 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap dt("Frog");
	std::cout << "HP: " << dt.getHitPoints() << std::endl;
	std::cout << "Energy: " << dt.getEnergy() << std::endl;
	dt.attack("a bug");
	dt.whoAmI();
	dt.highFivesGuys();
	dt.guardGate();
	return (0);
}
