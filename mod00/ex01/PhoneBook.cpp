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

void PhoneBook::search(void) const
{
    int amount;
    std::string str;

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
        if (str.length() <= 10)
        {
            for (int j = 0; j < 10 - str.length(); j++)
                std::cout << " ";
        }
        else
        {
            for (int j = 0; j < 9; j++)
                std::cout << str[j];
            std::cout << ".";
        }
        std::cout << str << "|";
        std::cout << std::endl;
    }

}
