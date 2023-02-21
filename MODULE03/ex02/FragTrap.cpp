/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:12:25 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/02 13:28:24 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//==============CONSTRUCTOR==========================
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << " FRAGTRAP Default constructor called " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	m_name = name;
	m_hitpoints = 100;
	m_energy = 10;
	m_damage = 30;
	std::cout << " FragTrap constructor init called " << name << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << " FRAGTRAP copy constructor called" << std::endl;
	*this = src;	
}

FragTrap::~FragTrap()
{
	std::cout << " FRAGTRAP Default Destructor called " << std::endl;
}

//===============OPERATOR===========================

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	m_name = src.m_name;
	m_hitpoints = src.m_hitpoints;
	m_energy = src.m_energy;
	m_damage = src.m_damage;
	return *this;
}
 
//======================================================

void FragTrap:: highFivesGuys(void)
{
	std::cout << m_name << " HIGH FIVES " << std::endl;
}