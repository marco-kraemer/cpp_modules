/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:32:16 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/04 15:20:25 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat one("Bureaucrat one", 100);
		Bureaucrat two("Bureaucrat two", 20);
		
		std::cout << one << std::endl;
		std::cout << two << std::endl;

		one.decrementGrade(50);
		std::cout << one << std::endl;
		one.incrementGrade(80);
		std::cout << one << std::endl;
		one.incrementGrade(80);
		std::cout << one << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
