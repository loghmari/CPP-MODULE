/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:25 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/06 15:21:39 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal ::Animal()
{
    std::cout << "Animal constructor called " << std::endl;
}

Animal::Animal(const Animal &src)
{
    type = src.type;
    std::cout << " Copy constrcutor Animal called " << std::endl;
}

Animal::~Animal()
{
    std::cout << " Animal Destructor called " << std::endl;
}

Animal & Animal ::operator=(Animal &src)
{
    std::cout << " Animal Assignation operator called " << std::endl;
    this->type = src.type;
    return *this;
}

std::string Animal:: gettype(void) const
{
    return(this->type);
}

void Animal::makesound(void)
{
    std::cout << " Animal make Sound .......!! " << std::endl;
}
