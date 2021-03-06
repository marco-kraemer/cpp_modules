/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 09:41:47 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/31 17:14:24 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int num)
{
//	std::cout << "Int constructor called" << std::endl;
	FixedValue = num << FractionalBits;
}

Fixed::Fixed(const float num)
{
//	std::cout << "Float constructor called" << std::endl;
	FixedValue = (int)roundf((num * (1 << this->FractionalBits)));
}

Fixed::Fixed(void)
{
//	std::cout << "Default constructor called" << std::endl;
	FixedValue = 0;	
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed&	Fixed::operator=(const Fixed &fix)
{
//	std::cout << "Assignation operator called" << std::endl;
	this->FixedValue = fix.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (FixedValue);
}

void	Fixed::setRawBits(int raw)
{
	FixedValue = raw;
}

float	Fixed::toInt( void ) const
{
	return (FixedValue >> FractionalBits);
}

float	Fixed::toFloat( void ) const
{
	return ((float)FixedValue / (1 << FractionalBits));
}

std::ostream& operator<<(std::ostream& stream, const Fixed& num)
{
	stream << num.toFloat();
	return stream;
}

Fixed&	Fixed::operator++()
{
	FixedValue++;
	return (*this);
}


Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->FixedValue++;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	FixedValue--;
	return (*this);
}


Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->FixedValue--;
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &fix)
{
	Fixed	tmp;
	float	num;

	num = this->FixedValue * fix.FixedValue;
	num = num / (1 << this->FractionalBits);
	tmp.setRawBits(num);
	return (tmp);
}

Fixed	Fixed::operator+(const Fixed &fix)
{
	Fixed	tmp;
	float	num;

	num = this->FixedValue + fix.FixedValue;
	tmp.setRawBits(num);
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &fix)
{
	Fixed	tmp;
	float	num;

	num = this->FixedValue - fix.FixedValue;
	tmp.setRawBits(num);
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &fix)
{
	Fixed	tmp;
	float	num;

	num = this->FixedValue / fix.FixedValue;
	num = num * (1 << this->FractionalBits);
	tmp.setRawBits(num);
	return (tmp);
}

bool	Fixed::operator>(const Fixed &fix)
{return (this->FixedValue > fix.FixedValue);}

bool	Fixed::operator<(const Fixed &fix)
{return (this->FixedValue < fix.FixedValue);}

bool	Fixed::operator>=(const Fixed &fix)
{return (this->FixedValue >= fix.FixedValue);}

bool	Fixed::operator<=(const Fixed &fix)
{return (this->FixedValue <= fix.FixedValue);}

bool	Fixed::operator==(const Fixed &fix)
{return (this->FixedValue == fix.FixedValue);}

bool	Fixed::operator!=(const Fixed &fix)
{return (this->FixedValue != fix.FixedValue);}

Fixed&	Fixed::min(Fixed &a, Fixed&b)
{
	if (a.FixedValue < b.FixedValue)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed&b)
{
	if (a.FixedValue < b.FixedValue)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed&b)
{
	if (a.FixedValue > b.FixedValue)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed&b)
{
	if (a.FixedValue > b.FixedValue)
		return (a);
	return (b);
}
