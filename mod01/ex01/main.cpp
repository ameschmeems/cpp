/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:24:44 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/16 16:55:09 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int i = 9;
	Zombie *horde = zombieHorde(i, "frog");
	for (int j = 0; j < i; j++)
		horde[j].announce();
	delete [] horde;
	return (0);
}
