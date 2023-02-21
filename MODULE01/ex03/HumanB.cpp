/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:48:56 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/13 16:12:40 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
	std::cout << "HumanB constructed" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructed" << std::endl;
}

void HumanB::attack()
{
	if(m_weapon == NULL)
		std::cout << m_name << " attacks with their hand " << std::endl;
	std::cout << m_name << " attacks with  their " << m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &New_weapon)
{
	m_weapon = &New_weapon; 
}


