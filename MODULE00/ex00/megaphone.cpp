/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:43:11 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/02 12:12:32 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
		return (0);
	}
	while(argv[++j])
	{
		i = 0;
		while(argv[j][i])
			std::cout << (char)toupper(argv[j][i++]);	
	}
	std::cout << std::endl;
	return 0;
}
