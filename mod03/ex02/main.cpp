/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:14:18 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 14:32:11 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap mobA("Frog");
	ScavTrap mobB("Toad");
	FragTrap mobC("Burger");
	mobA.attack("A box");
	mobB.attack("A wall");
	mobC.attack("something");
	mobB.guardGate();
	mobC.highFivesGuys();
	return 0;
}
