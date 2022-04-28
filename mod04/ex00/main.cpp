/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:31:11 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 12:50:02 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
const Animal *meta = new Animal();
const Animal *doge = new Dog();
const Animal *cate = new Cat();
std::cout << doge->getType() << std::endl;
std::cout << cate->getType() << std::endl;
cate->makeSound(); //will output the cat sound!
doge->makeSound();
meta->makeSound();
delete meta;
delete doge;
delete cate;
const WrongAnimal *meta2 = new WrongAnimal();
const WrongAnimal *cate2 = new WrongCat();
std::cout << meta2->getType() << std::endl;
std::cout << cate2->getType() << std::endl;
meta2->makeSound();
cate2->makeSound();
delete meta2;
delete cate2;
return 0;
}