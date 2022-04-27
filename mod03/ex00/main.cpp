/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:14:18 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 01:08:17 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap mobA("Frog");
	mobA.attack("A box");
	return 0;
}
