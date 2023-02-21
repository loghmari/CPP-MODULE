/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:28:38 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/09 23:30:53 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("SAMI", 100);
        Form f1("SLYZE's form", 5, 5);
        Form f2("SAMI's form", 150, 150);
        std::cout << "====================== FORM STATUS======================" << std::endl;
        std::cout << f1 << std::endl;
        std::cout << f2;
        std::cout << "====================== SIGNATURE======================" << std::endl;
		b1.signForm(f1);
		b1.signForm(f2);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}