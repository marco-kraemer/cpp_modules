/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:53:27 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/04 15:02:13 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	this->name = name;
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &p)
{
	this->name = p.name;
	this->grade = p.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &p)
{
	*this = p;
}

int		const & Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string	const & Bureaucrat::getName(void)const
{
	return (this->name);
}

void	Bureaucrat::incrementGrade(int amount)
{
	if (this->grade -= amount < 0)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= amount;
}

void	Bureaucrat::decrementGrade(int amount)
{
	if (this->grade += amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade -= amount;
}
