/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 08:38:34 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/06 10:51:05 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <exception>
#include <math.h>
#define	INT_MIN	-2147483648
#define INT_MAX 2147483647
class Convert
{
	private:
		std::string	input;
		double		value;
	public:
		Convert();
		Convert(const std::string input);
		~Convert();
		Convert(const Convert &p);
		Convert& operator=(const Convert &p);

		char	convertChar() const;
		int	convertInt() const;
		float	convertFloat() const;
		double	convertDouble() const;

		double	const & getValue(void) const;

		class	NonDisplayableException : public std::exception
		{
			const char* what() const noexcept override;
		};
	
		class	ImpossibleException : public std::exception
		{
			const char* what() const noexcept override;
		};
};

std::ostream& operator<<(std::ostream& stream, const Convert& p);

#endif
