/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:21:28 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/01 17:27:51 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("SAMI");
	ScavTrap scavtrap("LEE");

	claptrap.attack("ABOU");
	claptrap.attack("");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);

	scavtrap.attack("ABOU");
	scavtrap.takeDamage(6);
	scavtrap.beRepaired(4);
	scavtrap.guardGate();

	return (0);
}