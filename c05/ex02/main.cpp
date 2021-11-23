/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:26:31 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:34:43 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
		RobotomyRequestForm	RobotomyForm("home");

		std::cout << RobotomyForm << std::endl;
		std::cout << one << std::endl;
		one.signForm(&RobotomyForm);
		one.executeForm(RobotomyForm);
	
		one.incrementGrade(70);
		std::cout << "Tom grade = +70" << std::endl;
		std::cout << one << std::endl;
		one.signForm(&RobotomyForm);
		std::cout << RobotomyForm << std::endl;
		one.executeForm(RobotomyForm);
	
		one.incrementGrade(20);
		std::cout << "Tom grade = +20" << std::endl;
		one.executeForm(RobotomyForm);
	
		std::cout << "\n\n PresidentialPardon Form Example: \n" << std::endl; 
		PresidentialPardonForm	PresidentialForm("home");

		std::cout << PresidentialForm << std::endl;
		std::cout << one << std::endl;
		one.signForm(&PresidentialForm);
		one.executeForm(PresidentialForm);

		one.incrementGrade(20);
		std::cout << "Tom grade = +20" << std::endl;
		one.signForm(&PresidentialForm);
		one.executeForm(PresidentialForm);

		one.incrementGrade(20);
		std::cout << "Tom grade = +20" << std::endl;
		std::cout << one << std::endl;
		one.executeForm(PresidentialForm);

		one.incrementGrade(20);
		std::cout << "Tom grade = +20" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
