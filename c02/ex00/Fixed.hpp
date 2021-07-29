/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:25:28 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/29 15:08:01 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Fixed
{
private:
	int			FixedValue;
	static const int	FractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &fix);
	~Fixed();
};

#endif
