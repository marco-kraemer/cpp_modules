/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:32:16 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/05 10:03:31 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	one("Tom", 80);
		Form		form("Test form", 10, 52);

		std::cout << one << std::endl;
		one.signForm(&form);
		std::cout << form << std::endl;
		std::cout << "Tom grade increase in 30" << std::endl;
		one.incrementGrade(30);
		std::cout << one << std::endl;
		one.signForm(&form);
		std::cout << form << std::endl;
		std::cout << "Tom grade increase in 45" << std::endl;
		one.incrementGrade(45);
		std::cout << one << std::endl;
		one.signForm(&form);
		std::cout << form << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
