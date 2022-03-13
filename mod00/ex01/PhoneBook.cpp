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
    return ;
}
