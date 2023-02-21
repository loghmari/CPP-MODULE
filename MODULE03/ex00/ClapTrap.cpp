/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:18:16 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/02 13:30:54 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//===========CONSTRUCTOR==================================

ClapTrap::ClapTrap(std::string &name)
{
	m_name = name;
	m_hitpoints = 10;
	m_energy = 10;
	m_damage = 10;
	std::cout << "Copy constructor " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "default Destructor " << m_name << std::endl;
}

void ClapTrap:: attack (const std::string &target)
{
	if(m_energy != 0)
	{
		m_energy--;
		std::cout << "ClapTrap " << m_name << " attack " << target << ", causing " << m_damage << " damage" << std::endl;
		std::cout << "ClapTrap " << m_name << " has now " << m_energy << " energy " << std::endl;
	}
	else {
		std::cout << "ClapTrap " << m_name << "  has not enough energy!!" << std::endl;
	}
}

void ClapTrap:: takeDamage(unsigned int amount)
{
	if(m_hitpoints > amount )
		m_hitpoints -= amount;
	std::cout << "ClapTrap " << m_name << " take damage " << amount << ", new hitpoints " << m_hitpoints << std::endl;
}

void ClapTrap:: beRepaired(unsigned int amount)
{
	m_energy--;
	m_hitpoints += amount;
	std::cout << "ClapTrap " << m_name << "  be repaired  " << amount << ", new hitpoints: " << m_hitpoints << std::endl;
	std::cout << "ClapTrap " << m_name << " has now " << m_energy << " enregy" << std::endl;
}
