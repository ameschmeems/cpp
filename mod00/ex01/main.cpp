/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:46:25 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/12 17:30:07 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"

void search(PhoneBook pb)
{
	Contact *contact;
	contact = (Contact *)pb.get_contact(0);
	contact->set_first_name("Borgor");
	std::cout << pb.get_contact(0)->get_first_name() << std::endl;
}

int main(void)
{
	int exit = 0;
	std::string command;
	PhoneBook phonebook;

	while (!exit)
	{
		std::cout << "ENTER COMMAND (ADD, SEARCH OR EXIT): ";
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
			phonebook.set_contact();
		else if (!command.compare("SEARCH"))
			search(phonebook);
		else if (!command.compare("EXIT"))
			exit = 1;
	}
	return (0);
}
