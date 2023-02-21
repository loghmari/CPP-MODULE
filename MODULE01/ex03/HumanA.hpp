/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:18:58 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/13 15:57:52 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
	#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& new_weapon);
		~HumanA();
		void attacks();

	private:

		Weapon &m_weapon;
		std::string m_name;

};

#endif