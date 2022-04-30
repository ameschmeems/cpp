/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:26:20 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 23:26:20 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <stdexcept>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:

	Intern(void);
	Intern(const Intern &copy);
	~Intern(void);

	Intern &operator=(const Intern &intern);

	Form *makeForm(std::string name, std::string target);

	class InternException : public std::exception
	{
		const char *what(void) const throw();
	};

	typedef Form *(Intern::*pointer)(std::string);

private:

	Form *makePresidentialPardonForm(std::string target);
	Form *makeRobotomyRequestForm(std::string target);
	Form *makeShrubberyCreationForm(std::string target);
};

#endif
