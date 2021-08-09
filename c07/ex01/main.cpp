/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:14:27 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 10:34:51 by maraurel         ###   ########.fr       */
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
