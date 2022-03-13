/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:47:32 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/13 18:47:32 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
    bool running = true;
    std::string cmd;
    PhoneBook pb;

    while (running)
    {
        std::cout << "Input command (ADD, SEARCH or EXIT): ";
        std::getline(std::cin, cmd);
        if (!cmd.compare("EXIT"))
            running = false;
        else if (!cmd.compare("ADD"))
            pb.add();
        else if (!cmd.compare("SEARCH"))
            pb.search();
    }
}
