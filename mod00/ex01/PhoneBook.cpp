/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:04:17 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/12 17:34:10 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_num = -1;
	this->_count = 0;
}

const Contact *PhoneBook::get_contact(int i) const
{
	return (&(this->_contacts[i]));
}

void PhoneBook::set_contact(void)
{
	std::string str = "";

	if (this->_num == 8)
		this->_num = -1;
	this->_num++;
	this->_count++;
	
	while (!str.compare(""))
	{
		std::cout << "ENTER FIRST NAME: ";
		std::getline(std::cin, str);
	}
	_contacts[this->_num].set_first_name(str);
	str = "";
	while (!str.compare(""))
	{
		std::cout << "ENTER LAST NAME: ";
		std::getline(std::cin, str);
	}
	_contacts[this->_num].set_last_name(str);
	str = "";
	while (!str.compare(""))
	{
		std::cout << "ENTER NICKNAME: ";
		std::getline(std::cin, str);
	}
	_contacts[this->_num].set_nickname(str);
	str = "";
	while (!str.compare(""))
	{
		std::cout << "ENTER PHONE NUMBER: ";
		std::getline(std::cin, str);
	}
	_contacts[this->_num].set_phone_number(str);
	str = "";
	while (!str.compare(""))
	{
		std::cout << "ENTER DARKEST SECRET: ";
		std::getline(std::cin, str);
	}
	_contacts[this->_num].set_darkest_secret(str);
}
