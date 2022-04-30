/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:30:10 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/29 17:27:32 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
public:

	Bureaucrat(void);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);

	Bureaucrat &operator=(const Bureaucrat &b);

	const std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);

	class GradeTooHighException : public std::exception
	{
	public:

		const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:

		const char *what(void) const throw();
	};

private:

	const std::string _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
