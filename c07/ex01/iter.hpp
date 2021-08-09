/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:02:45 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 10:28:53 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void	iter(T *array, int length, void(*f)(T const &))
{
	for (int i = 0; i < length; i++)
	{
		(*f)(array[i]);
	}	
}

template <typename T>
void	print(T& array)
{
	std::cout << array;
}

#endif
