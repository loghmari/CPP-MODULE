/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:08:39 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/31 15:38:15 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() 
{
	std::string name1 = "JOHN";
	std::string name2 = "ABOU";
	std::string name3 = "LEE";
	ClapTrap clapTrap1(name1);
	ClapTrap clapTrap2(name2);
	ClapTrap claptrap3(name3);
	clapTrap1.attack(name2);
	claptrap3.attack(name1);
	clapTrap2.takeDamage(4);
	clapTrap1.takeDamage(4);
	clapTrap2.beRepaired(5);
	clapTrap1.beRepaired(4);

	return 0;
}
