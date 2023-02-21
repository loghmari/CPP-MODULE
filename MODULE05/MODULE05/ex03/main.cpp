/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:28:38 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/10 20:39:37 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	Form* sam;
	Form* test;
	Form* test1;
    Form *err;

	
	sam = someRandomIntern.makeForm("shrubbery creation", "abou");
	test = someRandomIntern.makeForm("robotomy request", "abou");
	test1 = someRandomIntern.makeForm("presidential pardon", "abou");
    err = someRandomIntern.makeForm("hello", "abou");

	delete sam;
	delete test;
	delete test1;
    delete err;
}