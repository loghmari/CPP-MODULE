/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:38 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/07 10:56:32 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
    #define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat & src);
        virtual ~Cat();
        Cat &operator=(Cat & src);
        std::string gettype(void);
        virtual void makesound(void);

    private:
        Brain* brain;

};

#endif