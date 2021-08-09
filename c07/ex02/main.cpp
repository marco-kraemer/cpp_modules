/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:37:09 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 14:06:26 by maraurel         ###   ########.fr       */
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
