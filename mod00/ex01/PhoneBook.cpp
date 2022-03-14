/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:47:35 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/13 18:47:35 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

PhoneBook::PhoneBook(void)
{
    this->_amount = -1;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void PhoneBook::add(void)
{
    std::string str;

    this->_amount++;
    if (this->_amount == 16)
        this->_amount = 8;
    int i = this->_amount % 8;
    do
    {
        std::cout << "Input First Name: ";
        std::getline(std::cin, str);
    } while (!str.compare(""));
    this->_contacts[i].set_fname(str);
    do
    {
        std::cout << "Input Last Name: ";
        std::getline(std::cin, str);
    } while (!str.compare(""));
    this->_contacts[i].set_lname(str);
    do
    {
        std::cout << "Input Nickname: ";
        std::getline(std::cin, str);
    } while (!str.compare(""));
    this->_contacts[i].set_nname(str);
    do
    {
        std::cout << "Input Number: ";
        std::getline(std::cin, str);
    } while (!str.compare(""));
    this->_contacts[i].set_number(str);
    do
    {
        std::cout << "Input Darkest Secret: ";
        std::getline(std::cin, str);
    } while (!str.compare(""));
    this->_contacts[i].set_secret(str);
}

void PhoneBook::_print_element(std::string str, int amount) const
{
    if (str.length() <= 10)
    {
        for (int j = 0; j < 10 - str.length(); j++)
            std::cout << " ";
		std::cout << str;
    }
   else
    {
        for (int j = 0; j < 9; j++)
            std::cout << str[j];
       std::cout << ".";
    }
}

void PhoneBook::search(void) const
{
    int amount;
	int id;
    std::string str;
	std::stringstream ss;

    if (this->_amount < 0)
        return ;
    if (this->_amount < 8)
        amount = this->_amount;
    else
        amount = 7;
    for (int i = 0; i <= amount; i++)
    {
        std::cout << "         " << i << "|";
        str = this->_contacts[i].get_fname();
		this->_print_element(str, amount);
		std::cout << "|";
		str = this->_contacts[i].get_lname();
		this->_print_element(str, amount);
		std::cout << "|";
		str = this->_contacts[i].get_nname();
		this->_print_element(str, amount);
        std::cout << std::endl;
    }
	do
	{
		std::cout << "Input desired contact index: ";
		std::getline(std::cin, str);
	} while (str.length() > 1 || (str[0] < '0' || str[0] > ('0' + amount)));
	ss << str;
	ss >> id;
	std::cout << "First Name: " << this->_contacts[id].get_fname() <<std::endl;
	std::cout << "Last Name: " << this->_contacts[id].get_lname() <<std::endl;
	std::cout << "Nickname: " << this->_contacts[id].get_nname() <<std::endl;
	std::cout << "Number: " << this->_contacts[id].get_number() <<std::endl;
	std::cout << "Darkest secret: " << this->_contacts[id].get_secret() <<std::endl;
}
