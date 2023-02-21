/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:45:54 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/10 22:27:45 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie;
	int i = 0;

	zombie = new Zombie[N];
	while(i < N)
	{
		zombie[i].setName(name);
		i++;
	}
	return(zombie);
}