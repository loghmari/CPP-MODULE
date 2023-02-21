/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:04:46 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/01 17:12:08 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
	#define FRAGTRAP_H
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();
	
		FragTrap &operator=(FragTrap const &src);
		void highFivesGuys(void);

};
#endif