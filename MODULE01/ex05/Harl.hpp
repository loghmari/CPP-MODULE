/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:13:32 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/16 13:58:06 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
	#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		static std::string m_levels[4];
};

#endif
