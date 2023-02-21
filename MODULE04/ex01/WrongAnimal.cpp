/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:19:57 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/06 15:21:26 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal ::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    type = src.type;
    std::cout << " Copy constrcutor WrongAnimal called " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << " WrongAnimal Destructor called " << std::endl;
}

WrongAnimal & WrongAnimal :: operator=(WrongAnimal &src)
{
    std::cout << " WrongAnimal Assignation operator called " << std::endl;
    this->type = src.type;
    return *this;
}

std::string WrongAnimal:: gettype(void) const
{
    return(this->type);
}

void WrongAnimal::makesound(void)
{
    std::cout << " WrongAnimal make Sound ......!! " << std::endl;
}