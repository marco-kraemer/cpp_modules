/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:06:36 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:10:46 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
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
	if (this->grade - amount < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= amount;
}

void	Bureaucrat::decrementGrade(int amount)
{
	if (this->grade + amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += amount;
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& p)
{
	stream << p.getName() << ", bureaucrat grade " << p.getGrade();
	return stream;
}
