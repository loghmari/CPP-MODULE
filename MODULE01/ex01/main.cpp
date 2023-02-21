/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:53:32 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/10 22:16:32 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies;
	int i = 0;
	zombies = zombieHorde(10, "name");
	while(i < 10)
		{
			zombies[i].annonce();
			i++;
		}
	delete[] zombies;
}