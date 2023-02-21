/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:26:27 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/01 17:31:11 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
{
	ClapTrap claptrap("SAMI");
	FragTrap Fragtrap("LEE");

	claptrap.attack("ABOU");
	claptrap.attack("");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);
	Fragtrap.attack("ABOU");
	Fragtrap.takeDamage(6);
	Fragtrap.beRepaired(4);
	Fragtrap.highFivesGuys();

	return (0);
}

}