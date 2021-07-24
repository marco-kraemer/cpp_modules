/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:12:03 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/24 18:18:11 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	// argv[0] == FILENAME, argv[1] == s1, argv[2] == s2
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::fstream	fs;
	std::string	filename = argv[0];
	fs.open (argv[0], std::fstream::in | std::fstream::out | std::fstream::app);
	fs << "oi\n";
	fs.close();
	return (0);
}
