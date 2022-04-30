/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:34:52 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 23:34:52 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern::~Intern(void)
{
	return ;
}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	func_ptr tab[3] = {&Intern::makePresidentialPardonForm, \
					&Intern::makeRobotomyRequestForm, \
					&Intern::makeShrubberyCreationForm};
	std::string names[3] = {"pardon", "robotomy", "shrubbery"};
	int i = 0;

	while (i < 3)
	{
		if (names[i].compare(name) == 0)
			break ;
		i++;
	}
	if (i > 3)
		throw InternException();
	Form *retval = (this->*tab[i])(name);
	std::cout << "Intern creates " << names[i] << " form";
	return (retval);
}

Form *Intern::makePresidentialPardonForm(std::string target)
{
	Form *new_form = new PresidentialPardonForm(target);
	return (new_form);
}

Form *Intern::makeRobotomyRequestForm(std::string target)
{
	Form *new_form = new RobotomyRequestForm(target);
	return (new_form);
}

Form *Intern::makeShrubberyCreationForm(std::string target)
{
	Form *new_form = new ShrubberyCreationForm(target);
	return (new_form);
}

const char *Intern::InternException::what(void) const throw()
{
	return ("A matching option has not been found");
}
