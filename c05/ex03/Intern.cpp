/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:41:03 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:47:48 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern& Intern::operator=(const Intern &p)
{
	p.~Intern();
	return (*this);
}

Intern::Intern(const Intern &p)
{
	*this = p;
}

Form*	makePresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*	makeShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*	makeRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string	formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form*	(*function[3])(std::string target) =
	{
		&makeRobotomy,
		&makePresidential,
		&makeShrubbery
	};

	Form	*form = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (name.compare(formNames[i]) == 0)
		{
			form = (*function[i])(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		}
	}
	throw WrongFormNameException();
	return (form);
}
