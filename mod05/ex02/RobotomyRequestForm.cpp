/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:16:29 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 19:36:39 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request", 72, 45), _target("default")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form("Robotomy Request", 72, 45), _target(copy._target)
{
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rrf)
{
	this->setSigned(rrf.isSigned());
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	try
	{
		Form::execute(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << executor.getName() << " can't execute this form: " << e.what() << std::endl;
		return ;
	}
	std::cout << "*annoying drill noises* " << std::endl;
	std::srand(std::time(0));
	if (std::rand() % 100 < 50)
		std::cout << "The Robotomy on " << this->_target << " was succesfull" << std::endl;
	else
		std::cout << "The Robotomy on " << this->_target << " failed" << std::endl;
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
