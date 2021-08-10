/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 07:59:45 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/10 08:53:27 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
#define	EASYFIND_HPP
#include <iostream>
#include <vector>

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
	for (const auto &s : a)
	{
		if (s == b)
		{
			std::cout << "Found!" << std::endl;
			return ;
		}
	}
	throw notFoundException();
}

#endif
