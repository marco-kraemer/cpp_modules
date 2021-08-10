/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:37:16 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/10 10:32:02 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <stdlib.h>
#include <time.h>
int main()
{
	try
	{
		std::cout << "\n5 numbers test:\n" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;


		std::cout << "\n100 numbers test:\n" << std::endl;
		Span sp2 = Span(100);
		srand(time(NULL));
		for (int i = 0; i < 100; i++)
		{
			int ran = rand() % 100000;
			sp2.addNumber(ran);
		}
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	
		std::cout << "\n15000 numbers test:\n" << std::endl;
		Span sp3 = Span(15000);
		srand(time(NULL));
		for (int i = 0; i < 15000; i++)
		{
			int ran = rand();
			sp3.addNumber(ran);
		}
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
		std::cout << "\nAssignation test:\n" << std::endl;
		Span sp4 = sp;
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
