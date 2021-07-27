/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:12:03 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/27 17:01:13 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<fstream>
#include	<string>

int main(int argc, char *argv[])
{
	// argv[0] == FILENAME, argv[1] == s1, argv[2] == s2
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		exit (1);
	}
	// filestream variable file
	std::fstream file;
	std::string word, filename;
	
	// filename of the file
	filename = argv[1];

	// opening file
	file.open(filename.c_str());
	if (!file)
	{
		std::cout << "Invalid file name" << std::endl;
		exit (1);
	}
	// Open filename.REPLACE
	std::ofstream	replace;
	std::string	toReplace = ".replace";
	std::string	newFileName = argv[1] + toReplace;
	replace.open (newFileName, std::ios::out | std::ios::app | std::ios::binary);

	// extracting words from the file
	while (file >> word)
	{
		// displaying content
		if (word != argv[2])
			replace << word << " ";
		else
			replace << argv[3] << " ";
	}
	return (0);
}
