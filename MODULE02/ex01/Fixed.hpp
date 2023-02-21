/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:25:54 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/30 14:28:59 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>


class Fixed{

	private:
		int _value;
		static const int _bits = 8;
	
	public:
		int getRawBits(void) const;
		void setRawBits(int const x);
		Fixed &operator=(Fixed const &copy_class);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(Fixed const &copy);
		~Fixed(void);
};

std::ostream &operator<<(std::ostream &out, const Fixed &a);

#endif