/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:01:17 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/16 17:08:22 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address - str: " << &str << std::endl;
	std::cout << "Memory address - stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address - stringREF: " << &stringREF << std::endl;
	std::cout << "Value - str: " << str << std::endl;
	std::cout << "Value - stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value - stringREF: " << stringREF << std::endl;
	return (0);
}
