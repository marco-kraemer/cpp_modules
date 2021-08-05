/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:13:15 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/05 12:18:26 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : Form(p.getName(), p.getSignGrade(), p.getExecGrade())
{
	*this = p;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	Form::operator=(p);
	this->setTarget(p.getTarget());
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == 0)
		throw NotSignedException();
	else if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	else
	{
		// Do something
	}
}
