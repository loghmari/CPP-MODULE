/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 08:45:56 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/10 18:14:56 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
	#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat  & src);

		std::string GetName() const;
		int GetGrade() const;

		void IncremantGrade();
		void DecrementGrade();
		void signForm(Form& form);
		void executeForm(const Form& form) const;
//----------------exception-------------------

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const  char* what() const throw()
				{ 
				return "Grade is too high, 1 is Max!!";
				}
		}; 

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const  char* what() const throw()
				{
					return "Grade is to low, 150 is Min!!";
				}
		};
//-------------------------------------------------
	private:
		std::string m_name;
		int m_grade;
};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i );

#endif