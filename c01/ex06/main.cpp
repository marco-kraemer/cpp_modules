/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:20:12 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/27 18:02:00 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	std::string	level;
	Karen		karen;

	std::cout << "Karen levels: DEBUG, INFO, WARNING, ERROR. Type EXIT to quit!"  << std::endl;
	while (1)
	{
		std::cout << "Karen Level: ";
		std::getline(std::cin >> std::ws, level);
		if (level == "EXIT")
			exit (0);
		karen.complain(level);
	}
}
