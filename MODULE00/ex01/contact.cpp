/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:33:16 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/06 20:17:03 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_contact(int i)
{
	m_first_name = "";
	m_last_name = "";
	m_nick_name = "";
	m_phone_number = "";
	m_darkest_secret = "";
   
	index = i;
	while(m_first_name.empty())
		{std::cout << "[PHONEBOOK] Insert  First Name : " ;
		 std::getline(std::cin, m_first_name);}
	while(m_last_name.empty())
		{std::cout << "[PHONEBOOK] Insert Last Name : ";
		std::getline(std::cin, m_last_name);}
	while(m_nick_name.empty())
		{std::cout << "[PHONEBOOK] Insert Nick Name : ";
		std::getline(std::cin, m_nick_name);}
	while(m_phone_number.empty())
		{std::cout << "[PHONEBOOK] Insert Phone Number : ";
		std::getline(std::cin, m_phone_number);}
	while(m_darkest_secret.empty())
		{std::cout << "[PHONEBOOK] Insert Darkest Secret : ";
		std::getline(std::cin, m_darkest_secret);}
	std::cout << "Contact Created with index :" << index + 1 << std::endl;
}

std::string Contact::resize_contact(std::string str)
{
	if(str.length() > 10)
	{
		str.resize(9);
		str.insert(9, ".");
	}
	return (str);
}


void Contact::print_contact()
{

	std::cout <<"|"<< std::setw(10) << index + 1;
	if(m_first_name.length() > 10)
		m_first_name = resize_contact(m_first_name);
	std::cout <<"|"<< std::setw(10) << m_first_name;
	if(m_last_name.length() > 10)
		m_last_name = resize_contact(m_last_name);
	std::cout <<"|"<< std::setw(10) << m_last_name;
	if(m_nick_name.length() > 10)
		m_nick_name = resize_contact(m_nick_name);
	std::cout <<"|"<< std::setw(10) << m_nick_name << "|" << std::endl;
	std::cout << "|==========|==========|==========|==========|"<< std::endl;
	std::cout << std::endl;

}


