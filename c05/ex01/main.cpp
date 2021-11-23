/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:14:38 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:24:13 by maraurel         ###   ########.fr       */
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
		std::cout << "Tom grade increased by 30" << std::endl;
		one.incrementGrade(30);
		std::cout << one << std::endl;
		one.signForm(&form);
		std::cout << form << std::endl;
		std::cout << "Tom grade increased by 45" << std::endl;
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
