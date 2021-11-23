/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:41:08 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:46:11 by maraurel         ###   ########.fr       */
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
