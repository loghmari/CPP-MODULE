/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:31 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/07 12:25:44 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
    #define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(const Animal &src);
        virtual ~Animal();
        Animal & operator=(Animal &src);
        virtual void makesound(void) = 0;
        std::string gettype(void) const;


};


#endif
