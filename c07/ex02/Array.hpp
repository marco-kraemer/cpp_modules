/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:37:07 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/09 14:03:55 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
	private:
		T		*array;
		unsigned int	length;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &p);
		Array& operator=(const Array &p);
		T& operator[](unsigned int i);
		unsigned int	size();

		class	LimitException : public std::exception
		{
			const char* what() const noexcept override
			{
				return "Element is out of limit.";
			}
		};
};

template <typename T>
Array<T>::Array() : array(nullptr)
{
	length = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : array(nullptr)
{
	length = n;
	array = new T[n];
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
}

template <typename T>
Array<T>::Array(const Array &p) : array(nullptr), length(0)
{
	this->array = new T[p.length];
	for (unsigned int i = 0; i < p.length; i++)
	{
		this->array[i] = p.array[i];
	}
	this->length = p.length;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array &p)
{
	this->array = new T[p.length];
	for (unsigned int i = 0; i < p.length; i++)
	{
		this->array[i] = p.array[i];
	}
	this->length = p.length;
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= length)
		throw Array<T>::LimitException();
	return (this->array[i]);
}

template<typename T>
unsigned int	Array<T>::size()
{
	return (this->length);
}

#endif
