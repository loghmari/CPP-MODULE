/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:56:10 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/17 15:58:27 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Default Constructor*/
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	m_value = 0;
}

/*Copy Constructor*/
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

/*Dextructor*/
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*Operator d'affectation*/
Fixed &Fixed:: operator=(const Fixed &cpy)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if(this != &cpy)
	{
	m_value = cpy.getRawBits();
	}
	return(*this);
}

/*gets  value*/
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(m_value);
}

/*sets  value*/
void Fixed::setRawBits( int const raw )
{
	m_value = raw;
}
