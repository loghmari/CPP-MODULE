/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:19:26 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/16 14:21:33 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};

Harl::~Harl(){};

void Harl:: debug(void)
{
	std::cout << "DEBUG : I love having extra bacon!" << std::endl;
}

void Harl:: info(void)
{
	std::cout << "INFO : I cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING : I think I deserve to have some extra bacon for free."<< std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR : This is unacceptable !" << std::endl;
}

std::string Harl::m_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void	Harl::complain(std::string level)
{
	void (Harl::*fct_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 
	int	i = 0;
	while(i < 4)
	{
		if(level == m_levels[i])
			(this->*fct_ptr[i])();
		i++;
	}
}
