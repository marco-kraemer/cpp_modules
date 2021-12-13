/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:47:58 by maraurel          #+#    #+#             */
/*   Updated: 2021/12/13 11:33:42 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vs;
	vs = {1, 2, 3, 4, 5, 100};
	try
	{
		  std::vector<int>::iterator it = easyfind(vs, 5);
		  std::cout << "First occurrence in position " << *it - 1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
