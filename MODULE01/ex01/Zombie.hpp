/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:28:54 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/10 22:23:10 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
	#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void annonce(void);
		void setName(std::string name);
	private:
		std::string m_name;
};

Zombie *zombieHorde( int N, std::string name );




#endif