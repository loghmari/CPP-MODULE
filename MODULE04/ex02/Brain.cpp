/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:57:22 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/07 11:28:50 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << " Brain default constructor " << std::endl;
}

Brain::Brain(const Brain &src)
{
	for(int i = 0; i < 100; i++)
		Ideas[i] = src.Ideas[i];
	std::cout << "brain Copy constructor " << std::endl;
}

Brain::~Brain()
{
	std::cout << " Brain Destructor " << std::endl;
}

Brain & Brain::operator=(const Brain &src)
{
	for(int i = 0; i < 100; i++)
	this->Ideas[i] = src.Ideas[i];
	return *this;
}
