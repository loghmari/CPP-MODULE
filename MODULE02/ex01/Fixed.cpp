/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:25:44 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/30 14:33:24 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::getRawBits() const
{
	return (_value);
}

void	Fixed::setRawBits(int const x)
{
		_value = x;
}

Fixed &Fixed::operator=(Fixed const &copy_class)
{
	std::cout << "Copy Assignation operator called" << std::endl;
	this->_value = copy_class.getRawBits();
	return *this;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;	
}

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	_value = val * (1 << Fixed::_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
	_value = (int)(roundf(val * (1 << _bits)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float		Fixed::toFloat(void) const 
{

	return ((float)this->_value / (float)(1 << _bits));
}

int		Fixed::toInt(void) const 
{

	return (this->_value / (1 << _bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &a)
{
	out << a.toFloat();
	return out;
}
