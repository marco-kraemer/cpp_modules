/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 08:28:57 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/06 08:58:21 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char **argv)
{
//	std::string s = argv[1];
	Convert	convert(argv[1]);

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		exit (0);
	}
	std::cout << convert << std::endl;
}
