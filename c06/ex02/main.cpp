/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:56:46 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/06 14:33:11 by maraurel         ###   ########.fr       */
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
	Base*	generic;

	generic = static_cast<Base*>(p);
	std::cout << typeid(generic).name() << std::endl;
	std::cout << p << std::endl;
}

/*
void	identify(Base& p)
{
	
}

*/

int	main(void)
{
	Base	*rand;

	rand = generate();
	identify(rand);
}
