/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:47:58 by maraurel          #+#    #+#             */
/*   Updated: 2021/12/06 11:05:46 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vs;
	vs = {1, 2, 3, 4, 5, 100};
	try
	{
		easyfind(vs, 3);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
