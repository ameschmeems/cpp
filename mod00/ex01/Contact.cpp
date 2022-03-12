/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:53:04 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/12 19:06:35 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::set_fname(std::string str)
{
	this->_fname = str;
}

void Contact::set_lname(std::string str)
{
	this->_lname = str;
}

void Contact::set_nname(std::string str)
{
	this->_nname = str;
}

void Contact::set_number(std::string str)
{
	this->_number = str;
}

void Contact::set_number(std::string str)
{
	this->_secret = str;
}

std::string Contact::get_fname(void) const
{
	return (this->_fname);
}

std::string Contact::get_lname(void) const
{
	return (this->_lname);
}

std::string Contact::get_nname(void) const
{
	return (this->_nname);
}

std::string Contact::get_number(void) const
{
	return (this->_number);
}

std::string Contact::get_secret(void) const
{
	return (this->_secret);
}
