/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:56:46 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 08:15:07 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base	*generate(void)
{
	int	num;
	Base	*ret;
	
	srand (time(NULL));
	num = rand() % 10;
	if (num >= 0 && num <= 3)
		ret = new A;
	else if (num >= 4 && num <= 6)
		ret = new B;
	else
		ret = new C;
	return (ret);
}

void	identify(Base* p)
{
	std::cout << "   Pointer: ";
	if (dynamic_cast<A*>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class C" << std::endl;
}

void	identify(Base& p)
{
	std::cout << "No pointer: ";

	try
	{
		A& a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "Class A" << std::endl;
	}
	catch (std::exception& e)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "Class B" << std::endl;
	}
	catch (std::exception& e)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "Class C" << std::endl;
	}
	catch (std::exception& e)
	{
	}
}

int	main(void)
{
	Base	*rand;

	rand = generate();
	identify(rand);
	identify(*rand);
}
