/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:14:18 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 12:23:34 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap mobA("Frog");
	ScavTrap mobB("Toad");
	mobA.attack("A box");
	mobB.attack("A wall");
	mobB.guardGate();
	return 0;
}
