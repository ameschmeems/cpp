/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:25:04 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/30 19:37:21 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Creation", 145, 137), _target("default")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form("Shrubbery Creation", 145, 137), _target(copy._target)
{
	*this = copy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf)
{
	this->setSigned(scf.isSigned());
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
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
	std::string filename;
	filename = this->_target + "_shrubbery";
	std::ofstream ofs;
	ofs.open(filename);
	ofs <<
	"         &&& &&  & &&                          &&& &&  & &&" << std::endl <<
	"	    && &\\/&\\|& ()|/ @, &&               && &\\/&\\|& ()|/ @, &&" << std::endl <<
	"      &\\/(/&/&||/& /_/)_&/_&               &\\/(/&/&||/& /_/)_&/_&" << std::endl <<
	"   &() \\/&|()|/&\\/ '%\" & ()            &() \\/&|()|/&\\/ '%\" & ()" << std::endl <<
	"  &_\\_&&_\\ |& |&&/&__%_/_& &&         &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl <<
	"&&   && & &| &| /& & % ()& /&&        &&   && & &| &| /& & % ()& /&&" << std::endl <<
	" ()&_---()&\\&\\|&&-&&--%---()~        ()&_---()&\\&\\|&&-&&--%---()~" << std::endl <<
	"     &&     \\|||                          &&     \\|||" << std::endl <<
	"             |||                                  |||" << std::endl <<
	"             |||                                  |||" << std::endl <<
	"             |||                                  |||" << std::endl <<
	"       , -=-~  .-^- _                       , -=-~  .-^- _" << std::endl;
	ofs.close();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
