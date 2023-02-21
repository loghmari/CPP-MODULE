/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:47:41 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/13 16:18:55 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
	#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon(std::string name_type);
		~Weapon();
		const std::string &getType();
		void setType(std::string type);
		
	private:
		std::string m_type;
};

#endif