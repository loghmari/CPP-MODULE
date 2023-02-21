/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:50:12 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/14 17:26:39 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <math.h>

Base * generate(void)
{
	srand(time(0));
	int r = rand() % 3 + 1;

	if (r == 1)
		return new A;
	if (r == 2)
		return new B;
	if (r == 3)
		return new C;
	else
		return NULL;
}


void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "this is class A" << std::endl;
	if(dynamic_cast<B*>(p))
		std::cout << "this is class B" << std::endl;
	if(dynamic_cast<C*>(p))
		std::cout << "this is class C" << std::endl;
}


void identify(Base& p)
{	
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "this is class A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "this is class B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "this is class C" << std::endl;
			}
			catch(const std::exception& e)
			{
				
			}
		}
	}
}