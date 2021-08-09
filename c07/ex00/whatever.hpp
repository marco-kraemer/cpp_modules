/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 08:29:47 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 09:57:26 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define	BASE_HPP

#include <iostream>

template <typename T>

void	swap(T &a, T &b)
{
	T	c = 0;
	
	c = a;
	a = b;
	b = c;
}

template <typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
