/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:41 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/07 11:14:07 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    brain = new Brain();
    std::cout << " Dog Constructor called " << std::endl;
}

Dog::Dog(Dog const &src)
{
    this->type = src.type;
    std::cout << " Copy constructor Dog called " << std::endl;
}

Dog::~Dog()
{
    delete brain;
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


