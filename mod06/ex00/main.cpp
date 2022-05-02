/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:51:55 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/02 18:24:33 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

bool isNum(std::string s)
{
	int i;
	int len = s.length();
	for (i = 0; i < len; i++)
	{
		if ((s[i] == '-' || s[i] == '+') && i == 0)
			continue ;
		else if (isdigit(s[i]) || s[i] == '.')
			continue ;
		else if (s[i] == 'f' && (i + 1) == len)
			continue ;
		else
			break ;
	}
	if (i == len)
		return (true);
	else
		return (false);
}

bool isSpecial(std::string s)
{
	return (s == "nanf" || s == "nan" || s == "+inff" || s == "-inff" || s == "+inf" || s == "-inf");
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	std::string num = argv[1];
	double value;
	if (!isSpecial(num) && !isNum(num))
	{
		if (num.length() != 1)
		{
			std::cerr << "Error: Invalid argument" << std::endl;
			return (1);
		}
		else
			value = static_cast<double>(num[0]);
	}
	else
		value = stof(num);
	if (isSpecial(num) || value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else if (value < 32 || value >= 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	if (isSpecial(num) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << static_cast<float>(value) << (static_cast<bool>(std::fmod(value, 1)) ? "f" : ".0f") << std::endl;
	std::cout << "double: " << static_cast<double>(value) << (static_cast<bool>(std::fmod(value, 1)) ? "" : ".0") << std::endl;
	return (0);
}
