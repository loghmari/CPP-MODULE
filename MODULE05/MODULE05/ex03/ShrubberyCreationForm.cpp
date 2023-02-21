/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:23:54 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/10 18:40:55 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm()
{
	//std::cout<<"Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):Form(target, 145, 137)
{
	m_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm  &src)
{
	// std::cout << "shrub copy constructor called" << std::enld;
	m_target = src.m_target;
}
std::string ShrubberyCreationForm::getTarget() const
{
	return(m_target);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &src)
{
	this->m_target = src.m_target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout<<"Default Destructor" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const 
{	
	if(this->isSigned() == false)
		throw Form::NotSignedException();
	else if(executor.GetGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	std::ofstream file(this->getTarget()+ "_shrubbery");
	file <<			"_________________ ¶¶¶¶\n";
	file <<			"________________ ¶¶¶¶¶¶¶¶\n";
	file <<			"_______________ ¶¶¶¶\n";
	file <<			"___¶¶¶¶¶¶¶¶¶__ ¶¶¶____¶¶¶\n";
	file <<			"_ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n";
	file <<			"¶¶¶¶¶ ______¶¶¶¶¶¶¶¶____¶¶¶¶¶\n";
	file <<			"_______ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_____¶¶\n";
	file <<			"______ ¶¶¶¶__¶¶¶_¶¶¶¶¶¶¶¶¶\n";
	file <<			"____ ¶¶¶¶___¶¶¶___¶¶¶_¶¶¶¶¶\n";
	file <<			"___ ¶¶¶¶¶__¶¶¶¶_¶¶_¶¶¶_¶¶¶¶¶\n";
	file <<			"___ ¶¶¶___¶¶¶¶¶_¶¶__¶¶¶__¶¶¶\n";
	file <<			"__ ¶¶____¶¶¶¶¶___¶¶_¶¶¶¶_¶¶¶\n";
	file <<			"________ ¶¶¶_____¶¶___¶¶__¶\n";
	file <<			"_________ ¶¶¶____¶¶¶__¶¶__¶\n";
	file <<			"_________ ¶¶¶_____¶¶___¶\n";
	file <<			"_________ ¶¶______¶¶\n";
	file <<			"_________________ ¶¶¶\n";
	file <<			"_________________ ¶¶¶\n";
	file <<			"_________________ ¶¶¶\n";
		file.close();
}

