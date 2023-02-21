/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:07:42 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/06 20:57:52 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
	#define CONTACT_H
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		void set_contact(int i);
		std::string resize_contact(std::string str);
		void print_contact();		
		void describe_contact();

	private:
		std::string m_first_name;
		std::string m_last_name;
		std::string m_nick_name;
		std::string m_phone_number;
		std::string m_darkest_secret;
		int index;
};

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void add();
		void search();
		
	private:
		Contact phone_contact[8];
		int index;
		int size;	
};

#endif
