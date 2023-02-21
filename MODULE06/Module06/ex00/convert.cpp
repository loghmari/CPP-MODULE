/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:11:09 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/14 14:29:06 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int ft_check(char *argv)
{
	if (strcmp(argv, "-inff") == 0 || strcmp(argv, "+inff") == 0 || strcmp(argv, "nanf") == 0 
		|| strcmp(argv, "-inf") == 0 || strcmp(argv, "+inf") == 0 || strcmp(argv, "nan") == 0
			|| strcmp(argv, "inf") == 0 || strcmp(argv, "inff") == 0)
		return (0);
	return (1);	
}


void	ToInt(double value)
{
	std::cout << " INT    : ";

	if (std::isinf(value) || std::isnan(value)) // is infini || is not a number
		std::cout << "IMPOSSIBLE ";
	else if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "OVERFLOW";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}


void	ToFloat(double value, char *argv)
{
	std::cout << " FLOAT  : ";
	if ((value < std::numeric_limits<float>::lowest() || value > std::numeric_limits<float>::max()) && ft_check(argv) == 1 )
		{
			std::cout << "OVERFLOW" << std::endl;
			return;
		}
	std::cout << static_cast<float>(value);
	if (static_cast<int>(value) == value)
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;
}

void	ToDouble(double value, char *argv)
{
	std::cout << " DOUBLE : ";
	if ((value < std::numeric_limits<double>::lowest() || value > std::numeric_limits<double>::max()) && ft_check(argv) == 1 )
		{
			std::cout << "OVERFLOW" << std::endl ;
			return;
		}
	std::cout << value;
	if (static_cast<int>(value) == value)
		std::cout << ".0";
	std::cout << std::endl;
}

void	ToChar(double value)
{
	std::cout << " CHAR   : ";

	int	c = static_cast<int>(value);

	if (c < 0 || c > 127)
		std::cout << "IMPOSSIBLE ";
	else if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		std::cout << "OVERFLOW" << std::endl;
	else if (!std::isprint(c))
		std::cout << "Non Displayable";
	else
		std::cout << "'" << (char) c << "'";
	std::cout << std::endl;
}

