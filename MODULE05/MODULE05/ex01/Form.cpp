/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:35:47 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/09 23:24:38 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//------------constructor---------------

Form::Form()
{
	//std::cout<< "Default Constructor" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade)
{
	//std::cout << "Constructeur init called " << std::endl;
	m_name = name;
	m_isSigned = false;
	
	if(signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if(signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	m_signGrade = signGrade;
	m_execGrade = execGrade;
}

Form:: Form(Form const &src)
{
	*this = src;
	//std::cout << " Copy Constructor Called " << std::endl;
}

Form::~Form()
{
	//std::cout << " Destructor Called " << std::endl;
}
//------------operator-------------------------

Form & Form ::operator=(Form const &src)
{
	this->m_isSigned = src.m_isSigned;;
	return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
	o << "Name         : " << src.getname() << std::endl;
	o << "Is signed    : " << src.isSigned() << std::endl;
	o << "Sign Grade   : " << src.getSignGrade() << std::endl;
	o << "Execute Grade: " << src.getExecGrade() << std::endl;
	return (o);
}

//--------------getters----------------------------

std::string Form::getname() const
{
	return (this->m_name);
}

int Form::getSignGrade() const
{
	return (this->m_signGrade);
}

int Form::getExecGrade() const
{
	return(this->m_execGrade);
}

bool Form::isSigned() const
{
	return(this->m_isSigned);
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if(bureaucrat.GetGrade() > m_signGrade)
		throw Form::GradeTooLowException();
	else
		m_isSigned = true;
	return;
}
