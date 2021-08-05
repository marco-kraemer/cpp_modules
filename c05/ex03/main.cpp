/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:32:16 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/05 14:26:10 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Intern	someRandomIntern;
		Form 	*myForm;


		Bureaucrat		one("Tom" , 20);
		myForm = someRandomIntern.makeForm("shrubbery creation", "Bender");
//		myForm = someRandomIntern.makeForm("presidential pardon", "Bender");
//		myForm = someRandomIntern.makeForm("robotomy request", "Bender");


		std::cout << "\n\n" << myForm->getName() << " Example: \n" << std::endl; 
		
		std::cout << *myForm << std::endl;
		std::cout << one << std::endl;
		one.signForm(myForm);
		one.executeForm(*myForm);
		
		one.incrementGrade(5);
		std::cout << "Tom grade = +5" << std::endl;
		std::cout << one << std::endl;
		one.signForm(myForm);
		std::cout << *myForm << std::endl;
		one.executeForm(*myForm);
		
		one.incrementGrade(10);
		std::cout << "Tom grade = +10" << std::endl;
		std::cout << one << std::endl;
		one.executeForm(*myForm);
		delete myForm;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
