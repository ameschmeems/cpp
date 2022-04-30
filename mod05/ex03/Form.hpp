/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:30:22 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 19:32:57 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
public:

	Form(void);
	Form(const Form &copy);
	Form(std::string name, int to_sign, int to_exec);
	virtual ~Form(void);

	Form &operator=(const Form &form);

	void beSigned(const Bureaucrat &b);
	std::string getName(void) const;
	bool isSigned(void) const;
	void setSigned(bool sign);
	int getGradeSign(void) const;
	int getGradeExec(void) const;
	virtual void execute(const Bureaucrat &executor) const;

	class GradeTooHighException : public std::exception
	{
		const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char *what(void) const throw();
	};
	class FormNotSignedException : public std::exception
	{
		const char *what(void) const throw();
	};

private:

	const std::string _name;
	bool _signed;
	const int _grade_to_sign;
	const int _grade_to_exec;
};

std::ostream &operator<<(std::ostream &os, const Form &f);

#endif
