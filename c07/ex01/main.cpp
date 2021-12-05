/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:59:28 by coder             #+#    #+#             */
/*   Updated: 2021/12/05 22:59:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	char charArray[27] = "abcdefghijklmnopqrstuvwxyz";

	::iter(charArray, 26, print);
	std::cout << std::endl;

	int intArray[10] = {0,1,2,3,4,5,6,7,8,9};

	::iter(intArray, 10, print);
	std::cout << std::endl;
}
