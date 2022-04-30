/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:29:36 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 19:20:49 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern a;
	Intern b;
	Form *test;
	Form *test2;

	b = a;
	test = a.makeForm("shrubbery", "home");
	std::cout << *test << std::endl;
	test2 = a.makeForm("pardon", "Joe");
	delete test;
	delete test2;
	try
	{
		test2 = a.makeForm("shrubbery robotomy", "Plant enthusiast");
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
