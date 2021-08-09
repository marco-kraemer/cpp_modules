/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:37:07 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 11:34:51 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
	private:
		T array[];
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &p);
		Array& operator=(const Array &p);
};

template <typename T>
Array<T>::Array()
{
	array = new T;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	array[n] = *new T;
}

template <typename T>
Array<T>::~Array()
{
}

template <typename T>
Array<T>::Array(const Array &p)
{
	*this = p;
}



#endif
