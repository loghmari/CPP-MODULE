/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:33:40 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/11 22:08:55 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string		str = " 'HI THIS IS BRAIN' ";
	std::string 	*stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "===============ADRESS=====================" << std::endl;
	std::cout << "l'adresse de str est : " << &str << std::endl;
	std::cout << "l'adresse de stringPTR est : " << stringPTR << std::endl;
	std::cout << "l'adresse de stringREF est : " << &stringREF << std::endl;
	std::cout << "==========================================" << std::endl << std::endl;
	std::cout << "===============VALUE======================" << std::endl;
	std::cout << "la valeur de str est : " << str << std::endl;
    std::cout << "la valeur de stringPTR est : " << *stringPTR << std::endl;
	std::cout << "la valeur de stringREF est : " << stringREF << std::endl;
	std::cout << "==========================================" << std::endl;
	return(0);
}
