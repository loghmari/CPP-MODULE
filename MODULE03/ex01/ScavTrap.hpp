/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:49:30 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/01 16:34:42 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPS_H
	#define SCAVTRAPS_H
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		ScavTrap &operator=(ScavTrap const &src);
		void guardGate();
		void attack(const std:: string &target);
};

#endif