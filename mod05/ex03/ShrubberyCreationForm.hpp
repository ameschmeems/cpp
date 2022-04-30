/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:23:08 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 19:29:22 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &scf);

	void execute(const Bureaucrat &executor) const;

private:

	std::string _target;
};

#endif
