/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:48:26 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/13 16:49:27 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &new_weapon): m_weapon(new_weapon), m_name(name)
{
	std::cout << "HumanA default constructed" << std::endl;
}

HumanA::~HumanA() 
{
	std::cout << "HumanA destructed" << std::endl;	
}

 void HumanA::attacks()
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}
