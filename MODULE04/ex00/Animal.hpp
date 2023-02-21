/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:31 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/06 15:26:09 by sloghmar         ###   ########.fr       */
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
        virtual void makesound(void);
        std::string gettype(void) const;


};


#endif
