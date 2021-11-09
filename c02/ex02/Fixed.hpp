/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 09:41:55 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/06 13:04:00 by maraurel         ###   ########.fr       */
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
	Fixed(const Fixed &fix); // Copy constructor;
	~Fixed(); // Destructor
	Fixed&	operator=(const Fixed &fix); // Assigment operator;
	
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	float	toInt( void ) const;

	// Operators overloading
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	// Arithmetic operators
	Fixed	operator*(const Fixed &fix);
	Fixed	operator-(const Fixed &fix);
	Fixed	operator+(const Fixed &fix);
	Fixed	operator/(const Fixed &fix);

	// Comparison operators
	bool	operator>(const Fixed &fix);
	bool	operator<(const Fixed &fix);
	bool	operator>=(const Fixed &fix);
	bool	operator<=(const Fixed &fix);
	bool	operator==(const Fixed &fix);
	bool	operator!=(const Fixed &fix);

	// Overloading functions
	static Fixed&		min(Fixed &a, Fixed&b);
	static const Fixed&	min(const Fixed& a, const Fixed&b);
	static Fixed&		max(Fixed &a, Fixed&b);
	static const Fixed&	max(const Fixed& a, const Fixed&b);
};

std::ostream& operator<<(std::ostream& stream, const Fixed& other);

#endif
