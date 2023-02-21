/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:20:02 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/06 14:55:26 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
    #define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
        
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        ~WrongAnimal();
        WrongAnimal & operator=(WrongAnimal &src);
        void makesound(void);
        std::string gettype(void) const;
};
#endif