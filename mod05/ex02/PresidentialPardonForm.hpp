/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:25:09 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 19:35:10 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(void);

	PresidentialPardonForm &operator=(const PresidentialPardonForm &ppf);

	void execute(const Bureaucrat &executor) const;

private:

	std::string _target;
};

#endif