/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 09:41:55 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/30 14:52:58 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int			FixedValue;
	static const int	FractionalBits = 8;
public:
	Fixed(); // Constructor
	Fixed(const int num); // Constructor
	Fixed(const float num); // Constructor
	Fixed(const Fixed &fix); // Copy constructor;  ClassName (const ClassName &old_obj)
	~Fixed(); // Destructor
	Fixed&	operator = (const Fixed &fix); // Assigment operator; ClassName& operator = (const ClassName &old_obj)
	
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	float	toInt( void ) const;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& other);

#endif
