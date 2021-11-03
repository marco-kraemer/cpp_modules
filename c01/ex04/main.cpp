/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:12:03 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/03 12:33:53 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<fstream>
#include	<string>

int main(int argc, char *argv[])
{
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

	// Replacing
	char		c;
	unsigned long	i;
	std::string 	str1;
	std::string 	str2;
	std::string	tmp;

	str1.assign(argv[2]);
	str2.assign(argv[3]);
	i = 0;
	while (file.get(c))
	{
		if (c == str1[i])
		{
			tmp.append(1, c);
			while (i < str1.length() - 1)
			{
				file.get(c);
				tmp.append(1, c);
				i++;
			}
			i = 0;
			if (!str1.compare(tmp))
				replace << str2;
			else
				replace << tmp;
			tmp.clear();
		}
		else
			replace << c;
		
	}
	return (0);
}
