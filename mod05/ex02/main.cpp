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

int main(void)
{
	{
		Bureaucrat guillaume("Guillaume", 1);
		RobotomyRequestForm form("Norminette");
		guillaume.signForm(form);
		guillaume.executeForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 1);
		PresidentialPardonForm form("Jan");
		guillaume.signForm(form);
		guillaume.executeForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 1);
		ShrubberyCreationForm form("Backyard");
		guillaume.signForm(form);
		guillaume.executeForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 1);
		ShrubberyCreationForm form("Backyard");
		guillaume.executeForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 150);
		Bureaucrat jan("Jan", 1);
		ShrubberyCreationForm form("Backyard");
		jan.signForm(form);
		guillaume.executeForm(form);
	}
	return (0);
}
