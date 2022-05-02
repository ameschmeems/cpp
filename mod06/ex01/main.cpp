/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:27:11 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/02 18:49:58 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

typedef struct Data
{
	int x;
	int y;
} Data;

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data d1;
	d1.x = 1;
	d1.y = 2;
	Data *d2 = &d1;
	std::cout << "x: " << d2->x << " y: " << d2->y << std::endl;
	uintptr_t ptr = serialize(d2);
	std::cout << "ptr: " << ptr << std::endl;
	Data *d3 = deserialize(ptr);
	std::cout << "d3: " << d3 << std::endl;
	std::cout << "d2: " << d2 << std::endl;
	std::cout << "d3.x: " << d3->x << " d3.y: " << d3->y << std::endl;
	return (0);
}
