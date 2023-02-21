/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:35 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/06 14:57:43 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << " Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    this->type = src.type;
    std::cout << " Copy constructor Cat called " << std::endl;
}

Cat::~Cat()
{
    std::cout << " Cat destructor called " << std::endl;
}

Cat & Cat::operator=(Cat &src)
{
    this->type = src.type;
    std::cout << " Cat operator assignation called " << std::endl;
    return *this;
}

std::string Cat::gettype(void)
{
    return (this->type);
}

void Cat::makesound(void)
{
    std::cout << " Miaou Miaou!!!" << std::endl;
}
