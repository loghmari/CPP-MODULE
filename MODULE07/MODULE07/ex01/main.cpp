/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:51:08 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/17 14:54:57 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Iter.hpp"

template<typename T>

void print (T a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	
	int x[] = {0,1,2,3};
	Iter<int>(x,4,&print);
	return 0;
}