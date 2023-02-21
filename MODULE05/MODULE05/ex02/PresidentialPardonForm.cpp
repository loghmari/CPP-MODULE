/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:44:47 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/10 18:51:22 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5),  m_target(target)
{
	// std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src), m_target(src.m_target) 
{
	// std::cout << "PresidentialPardonForm copy constructor called" << std::enld;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	this->m_target = src.m_target;
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const 
{
	if (this->isSigned() == false)
        throw Form::NotSignedException();
    if ( executor.GetGrade() > this->getExecGrade())
        throw Form::GradeTooLowException();
    else 
        std::cout << m_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
