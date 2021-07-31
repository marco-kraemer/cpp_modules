/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 09:42:02 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/31 17:14:35 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	std::cout << "\nDefault tests: " << std::endl;
	Fixed a;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "\nComparison operators tests:" << std::endl;

	Fixed	test1(20), test2(10); // <--- Change here


	if (test1 > test2)
		std::cout << "test1 >  test2" << std::endl;
	if (test1 < test2)
		std::cout << "test1 <  test2" << std::endl;
	if (test1 >= test2)
		std::cout << "test1 >= test2" << std::endl;
	if (test1 <= test2)
		std::cout << "test1 <= test2" << std::endl;
	if (test1 == test2)
		std::cout << "test1 == test2" << std::endl;
	if (test1 != test2)
		std::cout << "test1 != test2" << std::endl;

	std::cout << "\nArithmetic operators tests:" << std::endl;
	std::cout << " test1 + test2 = " << test1 + test2 << std::endl;
	std::cout << " test1 - test2 = " << test1 - test2 << std::endl;
	std::cout << " test1 * test2 = " << test1 * test2 << std::endl;
	std::cout << " test1 / test2 = "  << test1 / test2 << std::endl;

	std::cout << "\nMin / Max function tests:" << std::endl;
	std::cout << Fixed::max(test1, test2) << std::endl;
	std::cout << Fixed::min(test1, test2) << std::endl;
	const Fixed	test3(10), test4(20);
	std::cout << Fixed::max(test3, test4) << std::endl;
	std::cout << Fixed::min(test3, test4) << std::endl;
	return 0;
}
