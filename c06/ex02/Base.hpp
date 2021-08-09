/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:56:44 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 07:47:34 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <stdlib.h>
#include <time.h>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		virtual ~A();
		A();
		A(const A &p);
		A& operator=(const A &p);
};

class B : public Base
{
	public:
		virtual ~B();
		B();
		B(const B &p);
		B& operator=(const B &p);
};

class C : public Base
{
	public:
		virtual ~C();
		C();
		C(const C &p);
		C& operator=(const C &p);
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
