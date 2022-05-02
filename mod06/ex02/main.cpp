/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:50:56 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/02 19:33:12 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>

class Base {public: virtual ~Base(void) {}};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
	std::srand(time(0));
	int i = std::rand() % 3;
	std::cout << "Id: " << i << std::endl;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	A *a;
	B *b;
	C *c;
	if ((a = dynamic_cast<A *>(p)))
		std::cout << "Object of type A" << std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "Object of type B" << std::endl;
	else if ((c = dynamic_cast<C *>(p)))
		std::cout << "Object of type C" << std::endl;
	else
		std::cout << "Object is neither A, B or C" << std::endl;
}

void identify(Base &p)
{
	Base base;
	try
	{
		base = dynamic_cast<A &>(p);
		std::cout << "Object of type A" << std::endl;
	}
	catch(const std::bad_cast &e)
	{
		// std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		base = dynamic_cast<B &>(p);
		std::cout << "Object of type B" << std::endl;
	}
	catch(const std::bad_cast &e)
	{
		// std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		base = dynamic_cast<C &>(p);
		std::cout << "Object of type C" << std::endl;
	}
	catch(const std::bad_cast &e)
	{
		// std::cerr << "Exception: " << e.what() << std::endl;
	}
}

int main(void)
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return (0);
}
