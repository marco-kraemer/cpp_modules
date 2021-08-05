/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:11:48 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/05 12:19:29 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &p) : Form(p.getName(), p.getSignGrade(), p.getExecGrade())
{
	*this = p;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &p)
{
	Form::operator=(p);
	this->setTarget(p.getTarget());
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == 0)
		throw NotSignedException();
	else if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	else
	{
		// DO SOMETHING
	}
}
