/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:57:34 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/02 13:29:15 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//=================CONSTRUCTOR========================
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << " Scav Default Constructor called " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	m_name = name;
	m_hitpoints = 100;
	m_energy = 50;
	m_damage = 20;
	std::cout << " ScavTrap Constructor init called "  << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << " ScavTrap Destructor called " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << " ScavTrap copy constructor called" << std::endl;
	*this = src;
}
//===================Operateur d'assignation=================================

ScavTrap &ScavTrap ::operator=(ScavTrap const &src)
{
	m_name = src.m_name;
	m_hitpoints = src.m_hitpoints;
	m_energy = src.m_energy;
	m_damage = src.m_damage;
	return *this;
}


void ScavTrap::guardGate()
{
	std::cout << m_name << " is in Mode Gate Keeper " << std::endl;
}



void ScavTrap::attack(const std:: string &target)
{
	if(m_energy != 0)
	{
		m_energy--;
		std::cout << this->m_name << " attaaaack " << target << ", causing " << m_damage << " damage" << std::endl;
		std::cout << this->m_name << " has now " << m_energy << " energy " << std::endl;
	}
	else {
		std::cout << m_name << "  has not enough energy!!" << std::endl;
	}
}