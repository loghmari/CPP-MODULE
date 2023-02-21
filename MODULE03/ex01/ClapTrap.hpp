/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:46:48 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/01 17:28:06 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
	#define CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
	protected:
	
		unsigned int m_hitpoints;
		unsigned int m_energy;
		unsigned int m_damage;
		std::string m_name;

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();
		
		ClapTrap &operator=(ClapTrap const &src);
		void attack(const std:: string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
