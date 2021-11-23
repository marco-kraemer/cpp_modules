/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:28:01 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:28:02 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &p) : Form(p.getName(), p.getSignGrade(), p.getExecGrade())
{
	*this = p;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &p)
{
	Form::operator=(p);
	this->setTarget(p.getTarget());
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == 0)
		throw NotSignedException();
	else if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	else
	{
		std::ofstream treeFile(this->getTarget() + "_shruberry");
		treeFile << "       ###" << std::endl;
		treeFile << "      #o###" << std::endl;
		treeFile << "    #####o###" << std::endl;
		treeFile << "   #o#\\#|#/###" << std::endl;
		treeFile << "    ###\\|/#o#" << std::endl;
		treeFile << "     # }|{  #" << std::endl;
		treeFile << "       }|{" << std::endl;
	}
}
