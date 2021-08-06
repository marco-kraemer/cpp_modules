/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 08:38:34 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/06 09:31:42 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <exception>
#include <math.h>

class Convert
{
	private:
		std::string	input;
		double		value;
	public:
		Convert();
		Convert(std::string input);
		~Convert();
		Convert(const Convert &p);
		Convert& operator=(const Convert &p);

		char	convertChar() const;
		int	convertInt() const;

		std::string	const & getInput(void) const;

		class	NonDisplayableException : public std::exception
		{
			const char* what() const noexcept override
			{
				return "Non displayable";
			}
		};
	
		class	ImpossibleException : public std::exception
		{
			const char* what() const noexcept override
			{
				return "Impossible";
			}
		};
};

std::ostream& operator<<(std::ostream& stream, const Convert& p);

#endif
