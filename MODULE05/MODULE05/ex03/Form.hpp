/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:35:47 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/10 18:35:56 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
	#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const &src);
		virtual ~Form();
		Form & operator=(Form const &src);

		std::string getname() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool isSigned() const;
		
		void beSigned(Bureaucrat bureaucrat);
		virtual void execute(const Bureaucrat &executor) const = 0;
		

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (" Grade is too high !");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (" Grade is too low !");
				}
		};
		class NotSignedException : public std::exception 
		{
		public:
		virtual const char * what() const throw()
		{
			return "Form not signed";
		}
		};


	private:
		std::string m_name;
		int m_signGrade;
		int m_execGrade;
		bool m_isSigned;

	
};

std::ostream &	operator<<(std::ostream & o, Form const & src );




#endif