/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:45:52 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/14 16:43:24 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t s = reinterpret_cast<uintptr_t>(ptr);
	return (s);
}

Data* deserialize(uintptr_t raw)
{
	Data *r = reinterpret_cast<Data *>(raw);
	return(r);
}

int main(void)
{
	Data *i = new Data;
	
	i->str= "sami";
	i->i = 42;

	std::cout << "==================Before Cast=================" << std::endl;
	std::cout << "Name: " << i->str<< std::endl;
	std::cout << "Age: " << i->i << std::endl;
	

	std::cout << "================After Cast====================" << std::endl;
	std::cout << "Name: " << deserialize(serialize(i))->str << std::endl;
	std::cout << "Age: " << deserialize(serialize(i))->i << std::endl;
}