/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:46:48 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/31 15:45:44 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAPS_H
	#define CLAPTRAPS_H
#include <iostream>
#include <string>

class ClapTrap
{
	private:
		unsigned int m_hitpoints;
		unsigned int m_energy;
		unsigned int m_damage;
		std::string m_name;

	public:

		~ClapTrap();
		ClapTrap(std::string &name);
		void attack(const std:: string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
