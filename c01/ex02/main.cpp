/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:05:25 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/20 10:15:30 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adress in memory: " << &str << std::endl;
	std::cout << "Adress in memory of stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress in memory of stringREF: " << &stringREF << std::endl;
	std::cout << "String using stringPTR: " << *stringPTR << std::endl;
	std::cout << "String using stringREF: " << stringREF << std::endl;

}
