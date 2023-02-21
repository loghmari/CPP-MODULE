/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:35:47 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/09 23:24:38 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


//--------CONSTRUCTOR-Destructor---------------------------

Bureaucrat::Bureaucrat()
{
	//std::cout << " Default Constructor Called " << std::endl; 
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	//std::cout << " Copy Constructor Called " << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	//std::cout << "Constructor init Called " << std::endl; 
	this->m_name = name;
	
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->m_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << " Default Destructor Called " << std::endl;	
}

//---------Operator-----------------------

Bureaucrat &Bureaucrat ::operator=(const Bureaucrat  & src)
{
	this->m_name = src.m_name;
	this->m_grade = src.m_grade;
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.GetName() << " bureaucrat grade " << i.GetGrade();
	return o;
}
//===========Getters================================

std::string Bureaucrat::GetName() const
{
	return(m_name);
}

int Bureaucrat::GetGrade() const
{
	return(m_grade);
}

///-----------------Method----------------------------

void Bureaucrat::IncremantGrade()
{
	if(m_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	m_grade--;
	std::cout << m_grade << std::endl;
}

void Bureaucrat::DecrementGrade()
{
	if(m_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	m_grade++;
	std::cout << m_grade << std::endl;
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->m_name << " signs " << form.getname() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->m_name << " cannot sign " << form.getname() << " because ";
		std::cerr << e.what() << '\n';
	}
}

