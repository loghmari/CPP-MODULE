/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:19:52 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/06 14:57:13 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
    #define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat & src);
        ~WrongCat();
        WrongCat &operator=(WrongCat & src);
        std::string gettype(void);
        void makesound(void);

};

#endif