/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:34:43 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/10 22:23:01 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie constructed" << std::endl; 
}

Zombie::~Zombie()
{
	std::cout<< m_name << ":" << "is died!!" << std::endl;
}

void Zombie::annonce(void)
{
	std::cout << m_name << ":" << "BraiiiiiiinnnzzzZ..." <<std::endl;
}

void Zombie::setName (std::string name)
{
	m_name = name;
}
