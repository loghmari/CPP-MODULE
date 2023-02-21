/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:59:01 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/17 15:52:29 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
	#define FIXED_H
#include <iostream>
#include <string>

class Fixed
{
	private:
		int m_value;
		static const int m_bits = 8; 

	public:
			Fixed();
			~Fixed();
			Fixed(const Fixed &copy); //constructeur de copie
			Fixed &operator=(const Fixed &cpy);
			int getRawBits(void)const;
			void setRawBits(int const raw);
};

#endif
