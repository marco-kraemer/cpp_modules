/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:44:03 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/06 12:44:05 by maraurel         ###   ########.fr       */
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
	Fixed(); // Constructor
	Fixed(const Fixed &fix); // Copy constructor;  ClassName (const ClassName &old_obj)
	~Fixed(); // Destructor
	Fixed&	operator = (const Fixed &fix); // Assigment operator; ClassName& operator = (const ClassName &old_obj)
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
