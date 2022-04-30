/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:49:28 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 15:59:08 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("default"), _grade_to_sign(150), _grade_to_exec(150), _signed(false)
{
	return ;
}

Form::Form(const Form &copy) : _grade_to_sign(copy._grade_to_sign), _signed(false), \
							_grade_to_exec(copy._grade_to_exec), _name(copy._name)
{
	*this = copy;
}

Form::Form(std::string name, int to_sign, int to_exec) : _name(name), _grade_to_sign(to_sign), \
													_grade_to_exec(to_exec), _signed(false)
{
	if (_grade_to_sign < 1 || _grade_to_exec < 1)
		throw Form::GradeTooHighException();
	else if (_grade_to_sign > 150 || _grade_to_exec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{
	return ;
}

Form &Form::operator=(const Form &form)
{
	this->_signed = form._signed;
	return (*this);
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_grade_to_sign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::isSigned(void) const
{
	return (this->_signed);
}

int Form::getGradeSign(void) const
{
	return (this->_grade_to_sign);
}

int Form::getGradeExec(void) const
{
	return (this->_grade_to_exec);
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Form: " << f.getName() << ", signed: " << f.isSigned() << ", grade to sign: " << f.getGradeSign() \
	<< ", grade to execute: " << f.getGradeExec();
	return (os);
}
