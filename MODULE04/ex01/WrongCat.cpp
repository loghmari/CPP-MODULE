/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:19:46 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/06 14:59:34 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << " WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
    this->type = src.type;
    std::cout << " Copy constructor WrongCat called " << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << " WrongCat destructor called " << std::endl;
}

WrongCat & WrongCat:: operator=(WrongCat &src)
{
    this->type = src.type;
    std::cout << " WrongCat operator assignation called " << std::endl;
    return *this;
}

std::string WrongCat::gettype(void)
{
    return (this->type);
}

void WrongCat::makesound(void)
{
    std::cout << " Miaou Miaou!!!" << std::endl;
}
