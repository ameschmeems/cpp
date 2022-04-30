/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:29:36 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 15:46:46 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat guillaume("Guillaume Calvi", 1);
	Bureaucrat jan("Jan Behrenbeck", 150);

	std::cout << guillaume << std::endl;
	std::cout << jan << std::endl;

	try
	{
		guillaume.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		jan.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << guillaume << std::endl;
	std::cout << jan << std::endl;

	try
	{
		guillaume.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		jan.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << guillaume << std::endl;
	std::cout << jan << std::endl;

	try
	{
		Bureaucrat mist("Mistake", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
