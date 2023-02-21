/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:41 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/06 13:48:22 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << " Dog Constructor called " << std::endl;
}

Dog::Dog(Dog const &src)
{
    this->type = src.type;
    std::cout << " Copy constructor Dog called " << std::endl;
}

Dog::~Dog()
{
    std::cout << " Dog destructor called " << std::endl;
}

Dog & Dog::operator=(Dog const &src)
{
    std::cout << " Dog Operator assignation called " << std::endl;
    this->type = src.type;
    return *this;
}

std::string Dog::gettype(void)
{
    return(this->type);
}

void Dog::makesound(void)
{
    std::cout << "Wouff Wouff !! " << std::endl; 
}


