/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:55:35 by maraurel          #+#    #+#             */
/*   Updated: 2021/12/06 11:06:23 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
#define	EASYFIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>

class	notFoundException : public std::exception
{
	const char* what() const noexcept override
	{
		return "Integer not found.";
	}
};

template <typename T>
void	easyfind(T a, int b)
{
	if (std::find(a.begin(), a.end(), b) != a.end())
	{
		std::cout << "Found!" << std::endl;
		return ;
	}
	throw notFoundException();
}

#endif
