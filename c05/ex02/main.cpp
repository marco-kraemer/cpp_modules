/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:32:16 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/05 12:16:25 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat		one("Tom" , 149);
		ShrubberyCreationForm	ShrubberyForm("home");
		std::cout << "\n\n Shrubbery Form Example: \n" << std::endl; 
		
		std::cout << ShrubberyForm << std::endl;
		std::cout << one << std::endl;
		one.signForm(&ShrubberyForm);
		one.executeForm(ShrubberyForm);
		
		one.incrementGrade(5);
		std::cout << "Tom grade = +5" << std::endl;
		std::cout << one << std::endl;
		one.signForm(&ShrubberyForm);
		std::cout << ShrubberyForm << std::endl;
		one.executeForm(ShrubberyForm);
		
		one.incrementGrade(10);
		std::cout << "Tom grade = +10" << std::endl;
		std::cout << one << std::endl;
		one.executeForm(ShrubberyForm);

		std::cout << "\n\n RobotomyRequest Form Example: \n" << std::endl;
		
		std::cout << "\n\n PresidentialPardon Form Example: \n" << std::endl; 
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
