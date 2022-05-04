/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:11:13 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/04 18:30:31 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

const char *NotFoundExcept::what() const throw()
{
	return ("Element not found");
}

int main(void)
{
	std::vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	std::vector<int>::iterator i = easyfind(nums, 4);
	std::cout << *i << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(nums, 5);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
