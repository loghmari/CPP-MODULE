/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:44 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/06 15:19:07 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
    #define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const & src);
        virtual ~Dog();
        Dog &operator=(Dog const & src);
        std::string gettype(void);
        virtual void makesound (void);
};

#endif