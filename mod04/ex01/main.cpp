/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:31:11 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 20:16:02 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	Cat basic;
	Cat tmp = basic;
	int size = 4;
	Animal *tab[size];
	int i = 0;

	while (i < (size / 2))
	{
		tab[i] = new Dog();
		i++;
	}
	while (i < size)
	{
		tab[i] = new Cat();
		i++;
	}
	((Dog *)tab[0])->setIdea(0, "burger");
	*((Dog *)tab[1]) = *((Dog *)tab[0]);
	((Dog *)tab[0])->setIdea(0, "frog");
	std::cout << "idea of 0 is " << ((Dog *)tab[0])->getIdea(0) << std::endl;
	std::cout << "idea of 1 is " << ((Dog *)tab[1])->getIdea(0) << std::endl;
	while (--i >= 0)
		delete tab[i];
}
