/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:10:55 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/16 16:14:58 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *z1 = newZombie("borgar");
	Zombie *z2 = newZombie("frog");

	z1->announce();
	randomChump("toad");
	z2->announce();
	randomChump("bob");
	delete z1;
	delete z2;

	return (0);
}
