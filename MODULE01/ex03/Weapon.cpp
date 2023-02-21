/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:47:59 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/13 15:56:05 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name_type ) : m_type(name_type)
{
	std::cout << "Weapon constructed" << std::endl;
}
Weapon::~Weapon()
{
	std::cout << "weapon destructed " << std::endl;
}

const std::string &Weapon::getType()
{
	return(m_type);
}

void	Weapon::setType(std::string	type)
{
	m_type = type;
}