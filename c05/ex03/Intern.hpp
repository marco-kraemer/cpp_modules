/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 13:49:41 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/05 14:13:22 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:

	public:
		Intern();
		~Intern();
		Intern(const Intern &p);
		Intern& operator=(const Intern &p);

		Form	*makePresidential(std::string target);
		Form	*makeRobotomy(std::string target);
		Form	*makeShrubbery(std::string target);
		Form	*makeForm(std::string name, std::string target);

		class	WrongFormNameException : public std::exception
		{
			const char* what() const noexcept override
			{
				return "Wrong form name";
			}
		};
};

#endif
