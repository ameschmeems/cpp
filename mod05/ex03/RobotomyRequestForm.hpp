/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:16:20 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 19:31:28 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(void);

	RobotomyRequestForm &operator=(const RobotomyRequestForm &rrf);

	void execute(const Bureaucrat &executor) const;

private:

	std::string _target;
};

#endif
