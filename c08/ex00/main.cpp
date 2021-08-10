/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 07:59:51 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/10 08:57:16 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vs;
	vs = {1, 2, 3, 4, 5, 100};
	try
	{
		easyfind(vs, 100);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
