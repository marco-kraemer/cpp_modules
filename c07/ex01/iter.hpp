/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:59:23 by coder             #+#    #+#             */
/*   Updated: 2021/12/05 22:59:38 by coder            ###   ########.fr       */
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
