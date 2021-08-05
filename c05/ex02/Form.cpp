/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 08:40:34 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/05 10:41:28 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("generic name"), signGrade(1), execGrade(1)
{}

Form::Form(std::string name, int signGrade, int execGrade) : name(name), signGrade(signGrade), execGrade(execGrade)
{
	isSigned = false;
}

Form::~Form()
{}

Form& Form::operator=(const Form &p)
{
	this->isSigned = p.isSigned;
	return (*this);
}

Form::Form(const Form &p) : name(p.getName()), signGrade(p.getSignGrade()), execGrade(p.getExecGrade())
{
	*this = p;
}

bool		const & Form::getSigned(void) const
{
	return (this->isSigned);
}

std::string	const & Form::getName(void)const
{
	return (this->name);
}

int	const & Form::getSignGrade(void)const
{
	return (this->signGrade);
}

int	const & Form::getExecGrade(void)const
{
	return (this->execGrade);
}

void		Form::beSigned(Bureaucrat *bureaucrat)
{
	int grade = bureaucrat->getGrade();
	if (grade <= this->signGrade)
	{
		isSigned = true;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

void		Form::setTarget(std::string target)
{
	this->target = target;
}

std::string	const & Form::getTarget(void)const
{return (this->target);}

std::ostream& operator<<(std::ostream& stream, const Form& p)
{
	std::string	signature;

	if (p.getSigned() == 0)
		signature = "False";
	else
		signature = "True";
	stream << "Form name: " << p.getName() << ", Form sign grade: " << p.getSignGrade()
		<< ", Form execute grade: " << p.getExecGrade() << ". Signature: " << signature;
	return (stream);
}

void		Form::execute(Bureaucrat const & executor)
{
	executor.getGrade();
}
