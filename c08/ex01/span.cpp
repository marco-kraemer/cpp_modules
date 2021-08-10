/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:37:18 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/10 10:14:00 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int N)
{
	this->size = N;
}

Span::~Span() {}

Span::Span(const Span &p)
{
	*this = p;
}

Span&	Span::operator=(const Span &p)
{
	this->size = p.size;
	this->vs = p.vs;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->vs.size() == this->size)
	{
		throw	limitException();
		return ;
	}
	vs.push_back(num);
	
}

int	Span::shortestSpan()
{
	int	span;
	int	oldSpan;

	if (vs.size() == 0 || vs.size() == 1)
	{
		throw noSpanException();
	}
	span = vs[0] - vs[1];
	if (span < 0)
		span = span * (-1);
	oldSpan = span;
	for (auto it = vs.begin(); it != vs.end(); it++)
	{
		for (auto it2 = vs.begin(); it2 != vs.end(); it2++)
		{
			if (it != it2)
			{
				span = *it - *it2;
				if (span < 0)
					span = span * (-1);
				if (span < oldSpan)
					oldSpan = span;				
			}
		}
	}
	return (oldSpan);
}

int	Span::longestSpan()
{
	int	span;
	int	oldSpan;

	if (vs.size() == 0 || vs.size() == 1)
	{
		throw noSpanException();
	}
	span = vs[0] - vs[1];
	if (span < 0)
		span = span * (-1);
	oldSpan = span;
	for (auto it = vs.begin(); it != vs.end(); it++)
	{
		for (auto it2 = vs.begin(); it2 != vs.end(); it2++)
		{
			if (it != it2)
			{
				span = *it - *it2;
				if (span < 0)
					span = span * (-1);
				if (span > oldSpan)
					oldSpan = span;				
			}
		}
	}
	return (oldSpan);
}
