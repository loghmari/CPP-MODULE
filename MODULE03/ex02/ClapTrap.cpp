/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:03:46 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/02 13:27:49 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

//===========CONSTRUCTOR==================================
ClapTrap::ClapTrap()
{
	std::cout << " ClapTrap Default constructor called "  << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
	m_name = name;
	m_hitpoints = 100;
	m_energy = 50;
	m_damage = 20;
	std::cout << " ClapTrap constructor called " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << " ClapTrap default Destructor called " << m_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << " ClapTrap copy constructor called" << std::endl;
	*this = src;
}
//======================Operateur d'assignation=============================

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	m_name = src.m_name;
	m_energy = src.m_energy;
	m_damage = src.m_damage;
	m_hitpoints = src.m_hitpoints;
	return *this;
}

//==================================================================
void ClapTrap:: attack (const std::string &target)
{
	if(m_energy != 0)
	{
		m_energy--;
		std::cout << m_name << " attack " << target << ", causing " << m_damage << " damage" << std::endl;
		std::cout << m_name << " has now " << m_energy << " energy " << std::endl;
	}
	else {
		std::cout << m_name << "  has not enough energy!!" << std::endl;
	}
}

void ClapTrap:: takeDamage(unsigned int amount)
{
	if(m_hitpoints > amount )
		m_hitpoints -= amount;
	std::cout << m_name << " take damage " << amount << ", new hitpoints " << m_hitpoints << std::endl;
}

void ClapTrap:: beRepaired(unsigned int amount)
{
	m_energy--;
	m_hitpoints += amount;
	std::cout <<  m_name << "  be repaired  " << amount << ", new hitpoints: " << m_hitpoints << std::endl;
	std::cout << m_name << " has now " << m_energy << " enregy" << std::endl;
}
