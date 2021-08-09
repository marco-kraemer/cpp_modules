/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:37:07 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 12:04:09 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
	private:
		T	*array;
		int	length;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &p);
		Array& operator=(const Array &p);
		T& operator[](unsigned int i);
};

template <typename T>
Array<T>::Array()
{
	array(nullptr);
	length = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : array(nullptr)
{
	length = 0;
	array = new T[n];
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
}

template <typename T>
Array<T>::Array(const Array &p)
{
	*this = p;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array &p)
{
	for (int i = 0; p.array[i]; i++)
		this->array[i] = p.array[i];
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	return (this->array[i]);
}

#endif
