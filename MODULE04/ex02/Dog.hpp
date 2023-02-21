/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:44 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/07 10:55:48 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
    #define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const & src);
        virtual ~Dog();
        Dog &operator=(Dog const & src);
        std::string gettype(void);
        virtual void makesound (void);

    private:
        Brain* brain;
};

#endif