/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:11:33 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/14 15:54:59 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv)
{
	double value =0.0;
	
	if(argc != 2)
		{
			std::cout << " Number of Argument Invalid " << std::endl;
			return (1);
		}
	
	
	if (argv[1][0] >= 'a' && argv[1][0] <= 'z' && argv[1][1] == '\0')
		value = (double)argv[1][0];
	else
		value = std::strtod(argv[1], NULL);
	if(argv[1][0] != '0' && value == 0)
		{
			std::cerr << "error Argument" << std::endl;
			exit(42);
		}

	ToChar(value);
	ToInt(value);
	ToFloat(value , argv[1]);
	ToDouble(value, argv[1]);
	return (0);
}