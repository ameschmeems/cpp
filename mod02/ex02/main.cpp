/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:24:19 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 11:43:23 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a " << a << std::endl;

	std::cout << "b " << b << std::endl;

	std::cout << "a * b " << a * b << std::endl;
	std::cout << "a + b " << a + b << std::endl;
	std::cout << "a - b " << a - b << std::endl;
	std::cout << "a / b " << a / b << std::endl;

	std::cout <<"max(a, b) " << Fixed::max(a, b) << std::endl;

	return (0);
}
