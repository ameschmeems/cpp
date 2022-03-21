/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:23:36 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/21 14:18:01 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <sstream>
#include <iostream>

int main(int argc, char **argv)
{
	std::ifstream ifs;
	std::string fname;
	std::string s1;
	std::string s2;
	std::string temp;
	std::size_t found;
	std::string::iterator it;

	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	fname = argv[1];
	ifs.open(fname);
	if (!ifs)
	{
		std::cout << "Invalid input file" << std::endl;
		return (1);
	}
	std::ofstream outfile(fname + ".replace");
	s1 = argv[2];
	s2 = argv[3];
	if (!s1.length())
	{
		std::cout << "s1 can't have the length of 0" << std::endl;
		return (1);
	}
	while (std::getline(ifs, temp))
	{
		while ((found = temp.find(s1)) != std::string::npos)
		{
			temp.erase(found, s1.length());
			temp.insert(found, s2);
		}
		outfile << temp << std::endl;
	}
	ifs.close();
	outfile.close();
	return (1);
}
