/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:54:02 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 19:36:32 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon", 25, 5), _target("default")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form("Presidential Pardon", 25, 5), _target(copy._target)
{
	*this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ppf)
{
	this->setSigned(ppf.isSigned());
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
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
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
