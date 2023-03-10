/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:18:36 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/07 11:41:32 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
Animal *tab[20];
for(int i = 0; i < 20; i++)
	{
		if(i < 10)
		{
			tab[i] = new Cat();
			tab[i]->makesound();
		}
		else
		{
			tab[i] = new Dog();
			tab[i]->makesound();
		}
	}
for(int i = 0; i < 20; i++)
	delete tab[i];


delete j;//should not create a leak
delete i;
return 0;
}