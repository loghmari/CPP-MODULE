/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:51:54 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/10 20:45:47 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() 
{
	// std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
	// std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	// std::cout << "Intern Copy constructor called" << std::endl;
	*this = src;
}

Intern &Intern::operator=(const Intern &src)
{
	// std::cout << "Intern copy assignement operator called" << std::endl;
	(void)src;
	return (*this);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *form;
	std::string name_tab[3]; 
	int i = 0;

	name_tab[0] = "robotomy request"; 
	name_tab[1] = "presidential pardon"; 
	name_tab[2] = "shrubbery creation";

	while (i < 3)
	{
		if (name == name_tab[i])
			break ;
		i++;
	}

	switch (i)
	{
		case 0:
		form = new RobotomyRequestForm(target);
		std::cout << "RobotRequestForm is created" << std::endl;
		break ;
		case 1:
		form = new PresidentialPardonForm(target);
		std::cout << "PresidentialPardonForm is created" << std::endl;
		break ;
		case 2:
		form = new ShrubberyCreationForm(target);
		std::cout << "ShrubberyCreationForm is created" << std::endl;
		break ;
		default:
		std::cout << "Error: Intern cannot creat" << std::endl;
		form = nullptr;
	}
	return (form);
}