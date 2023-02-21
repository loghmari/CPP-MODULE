/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:48:41 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/13 16:09:38 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
	#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &New_weapon);

	private:
		Weapon *m_weapon;
		std::string m_name;
};

#endif