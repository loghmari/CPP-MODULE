/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:34:54 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/30 14:37:50 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	
	Fixed a;
	Fixed const b (Fixed(5.05f) * Fixed(2));

	//Fixed d (Fixed(5.05f) * Fixed(2));
	//Fixed c (Fixed(23.4f) / Fixed(3.5f));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	//std::cout << "d < c: " << (d < c) << std::endl;
	//std::cout << "d > c: " << (d > c) << std::endl;
	//std::cout << "d <= c: " << (d <= c) << std::endl;
	//std::cout << "d >= c: " << (d >= c) << std::endl;
	//std::cout << "d != c: " << (d != c) << std::endl;
	//std::cout << "d == c: " << (d == c) << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}