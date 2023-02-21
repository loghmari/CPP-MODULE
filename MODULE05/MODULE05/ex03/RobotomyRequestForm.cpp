/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:24:21 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/10 18:33:34 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45),  m_target(target)
{
	// std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), m_target(src.m_target) 
{
	// std::cout << "RobotomyRequestForm copy constructor called" << std::enld;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	this->m_target = src.m_target;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const 
{	
	if (this->isSigned() == false)
        throw Form::NotSignedException();
    if ( executor.GetGrade() > this->getExecGrade())
        throw Form::GradeTooLowException();
    else {
		static int i = 0;
		if (i % 2 == 0)
			std::cout << "BZZZZ " << m_target << "has been robotomized" << std::endl;
		else
        	std::cout << "Operation Failed !" << std::endl;
		i++;
    }
}