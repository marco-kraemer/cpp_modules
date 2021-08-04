/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:32:16 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/04 14:53:19 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat ("one", 100);
		Bureaucrat ("two", 20);
		Bureaucrat ("three", -10);
		Bureaucrat ("four", 160);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
