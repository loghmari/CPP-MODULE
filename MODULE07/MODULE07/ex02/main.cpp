/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:26:06 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/17 15:26:26 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"



int main()
{
	Array<int> numbers(20);
	Array<int> numbers1(10);

	std::cout << "==========INT==========" << std::endl;
	for(int i = 0; i < 20;i++)
	{
		numbers[i] = 1;
	}
	numbers.print();
	
	std::cout << "-----------TEST-------------" << std::endl;
	
	srand(time(NULL));
	for(int i = 0;i < 5; i++)
	{
		int a = rand();
		numbers1[i] = a;
	}
	numbers1.print();

	std::cout << "==========Char==========" << std::endl;
	
	Array<char> chara(20);
	Array<char> chara1(10);
	
	const char *tab = "My name is Sami!";
	const char *tab1 = "Salam";
	for(int i = 0;i < 16;i++)
	{
		chara[i] = tab[i];
	}
	chara.print();

	std::cout << "----------" << std::endl;
	
	for(int i = 0;i < 5;i++)
	{
		chara1[i] = tab1[i];
	}
	chara1.print();
}