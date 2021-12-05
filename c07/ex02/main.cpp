/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 23:03:23 by coder             #+#    #+#             */
/*   Updated: 2021/12/05 23:08:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int, char**)
{
	Array<int>	intArray(10);
	Array<char>	charArray(10);

	intArray[5] = 8;
	std::cout << "intArray[5] = " << intArray[5] << std::endl;
	{
		Array<int> TmpArray;
		TmpArray = intArray;
		std::cout << "tmpArray = intArray" << std::endl;
		std::cout << "tmpArray[5] = " << TmpArray[5] << std::endl;
	}
	{
		Array<int> TmpArray(intArray);
		std::cout << "tmpArray(intArray)" << std::endl;
		std::cout << "tmpArray[5] = " << TmpArray[5] << std::endl;
	}

	charArray[5] = 'A';
	std::cout << "charArray[5] = " << charArray[5] << std::endl;
	{
		Array<char> TmpArray;
		TmpArray = charArray;
		std::cout << "tmpArray = charArray" << std::endl;
		std::cout << "tmpArray[5] = " << TmpArray[5] << std::endl;
	}
	{
		Array<char> TmpArray(charArray);
		std::cout << "tmpArray(charArray)" << std::endl;
		std::cout << "tmpArray[5] = " << TmpArray[5] << std::endl;
	}
	std::cout << "Size of CharArray = " << charArray.size() << std::endl;
	return 0;
}
