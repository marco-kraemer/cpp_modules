/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 08:29:36 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 09:57:10 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::cout << "\nSwap INT" << std::endl;
	int a = 5;
	int b = 8;
	std::cout << "A: " << a << "  B: " << b << std::endl;
	swap<int>(a, b);
	std::cout << "A: " << a << "  B: " << b << std::endl;

	std::cout << "\nSwap CHAR" << std::endl;
	char c = 'c';
	char d = 'd';
	std::cout << "C: " << c << "  D: " << d << std::endl;
	swap<char>(c, d);
	std::cout << "C: " << c << "  D: " << d << std::endl;

	std::cout << "\nMIN/MAX tests" << std::endl;
	std::cout << "Min value int  (a, b): " << min<int>(a, b) << std::endl;
	std::cout << "Min value char (c, d): " << min<char>(c, d) << std::endl;
	std::cout << "Max value int  (a, b): " << max<int>(a, b) << std::endl;
	std::cout << "Max value char (c, d): " << max<char>(c, d) << std::endl;
}
