/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:29:36 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 15:49:36 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		Form form("Enrollment certificate", 10, 10);
		Bureaucrat max("Max Senges", 7);
		std::cout << max << std::endl;
		std::cout << form << std::endl;
		max.signForm(form);
		std::cout << form << std::endl;
	}

	{
		Form form("Enrollment certificate", 100, 100);
		Bureaucrat jan("Jan Behrenbeck", 142);
		std::cout << jan << std::endl;
		jan.signForm(form);
		std::cout << form << std::endl;
	}

	{
		try
		{
			Form form("Form", 0, 0);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			Form form("Form", 160, 160);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
