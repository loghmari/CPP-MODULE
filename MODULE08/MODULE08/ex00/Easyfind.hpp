/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:06:35 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/19 23:10:32 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include<vector>

template<typename T>
void easyfind(T vector, int nb)
{
	for(unsigned int i=0;i<vector.size();i++)
	{
		if (std::find(vector.begin(), vector.end(), nb) != vector.end())
		{
			std::cout << nb << std::endl;			
			return ;
		}
	}	
	std::cerr << "Error" << std::endl;
}	

#endif