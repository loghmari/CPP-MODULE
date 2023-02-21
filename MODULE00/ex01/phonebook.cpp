/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:40:08 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/06 21:33:07 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact():index(0){}

Contact::~Contact(){}

Phonebook::Phonebook():index(0), size(0){}

Phonebook::~Phonebook(){}

void Phonebook::add()
{
	if(index >= 8)
		index = 0;
	phone_contact[index].set_contact(index);
	index++;
	if(size < 8)
		size++;

}


void Phonebook::search()
{
	int i = 0;
	std::string contact_search;
	int nb = 0;

	std::cout << "============================================="<< std::endl;
	std::cout << "|   INDEX  |First Name| Last Name| Nickname |"<< std::endl;
	std::cout << "|==========|==========|==========|==========|"<< std::endl;
	while(i < size)
	{
		phone_contact[i].print_contact();	
		i++;
	}
	if(i > 0)
	{
		while(1)
		{
		std::cout << "[PhoneBook] Insert contact's index: " << std::endl;
    	std::getline(std::cin, contact_search);
	 	try{
			nb = std::stoi(contact_search);
			if (nb >= 1 && nb <= 8 && nb <= size)
				break ;
			else
			std::cout << "!! Invalid Index !!!"<< std::endl;
		}
     	catch(...)
		{
			;
		}

	}
		if(nb > 0 && nb < 9 && nb <= size)
        	 phone_contact[nb - 1].describe_contact();
	}
}

void Contact::describe_contact()
{
	std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "First name: " << m_first_name << std::endl;
    std::cout << "Last name: " << m_last_name << std::endl;
    std::cout << "Nick Name: " << m_nick_name << std::endl;
    std::cout << "Phone number: " << m_phone_number << std::endl;
    std::cout << "Darkest secret: " << m_darkest_secret << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
}

int main()
{
	std::string command;
	Phonebook phonebook;

	while(1)
	{
		std::cout << "Enter Command ";
		std::getline(std::cin, command);
		if(command == "ADD" || command == "add" )
		{
			phonebook.add();
		}
		
		else if (command == "SEARCH" || command == "search")
		{
			phonebook.search();
		}
		else if (command == "EXIT" || command == "exit")
			{
std::cout <<"	  ⠀⠀⠀⣠⣾⠿⠻⢶⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣴⣶⣶⣶⣶⣶⣦⣤⣤⣄⣀"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⣾⠟⢡⡄⣷⡀⠻⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⡿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⢿⣦⣄"<<std::endl;
std::cout <<"	   ⠀⢰⣿⠀⣿⣴⣿⠃⠀⢻⣧⠀⠀⠀⠀⠀⠀⢠⣴⡿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⡶⠿⠷⣶⣄"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠘⣿⡀⠟⠉⠁⠀⠀⠀⢻⣷⡀⠀⠀⠀⣴⡿⠋⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣆⠀⠀⠀⠀⠀⠀⠀⢀⣾⠋⠀⣴⡆⠈⢻⣆"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠙⠿⣶⣤⣤⣤⣀⠀⠀⠙⣷⣄⢀⣾⡟⠁⢀⣀⣀⣠⣄⡀⠈⠉⠓⠢⠤⠤⠤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣆⠀⠀⠀⠀⠀⢠⣾⠃⠀⢸⣿⡆⠀⠘⣿"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠙⠻⣶⡄⠈⠛⣿⡟⣤⣿⠿⠿⠿⢿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣀⠈⢿⣆⠀⠀⢀⣰⡟⠁⠀⠀⠈⠙⠛⠂⢰⣿"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⡆⣼⡿⣱⠟⠁⠀⠀⠀⠀⠈⠛⢿⣿⣦⠀⠀⠀⠀⠀⠀⠀⣀⣾⣿⣿⣿⣿⠿⢿⣾⣿⡦⠶⠟⠉⠀⣀⣤⣤⣤⣤⣤⣴⡿⠃"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⡿⠁⠁⠀⠀⠐⢛⣙⠓⢦⡀⠈⢻⣿⠀⠀⠀⠀⠀⢀⣼⣿⣿⠿⠛⠁⠀⠀⠀⠹⣿⣷⠀⢀⣴⠿⠋⠁"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⡟⠀⠀⢀⣤⡖⠋⣿⣿⣿⢦⡙⠆⠀⡿⠀⠀⠀⠀⢠⣾⣿⡿⠥⢀⣀⣀⣀⡀⠀⠀⠈⢿⣷⡟⠁"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠟⠀⠀⠀⢠⡈⠙⠲⢿⣿⣿⣤⡿⣦⡰⠁⠀⠀⠀⠀⠈⣿⣏⣴⠚⣿⣿⣿⡎⠙⣦⡀⠀⠈⣿⣆"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⡏⠀⠀⠀⠀⠀⠉⠓⠦⣤⡤⠴⠒⣢⡌⠀⠀⣀⣀⣀⣀⠀⢻⣯⣉⠙⠛⠛⠛⠓⠋⣩⡗⠀⠀⠘⣿⣆"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⠶⠟⡿⠀⠀⠈⠉⠀⠈⠉⠁⠀⠙⢿⣟⠓⠶⠴⠒⠋⠁⠀⠀⠀⠀⠘⣿⡆"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⣼⡟⠁⠀⢸⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⡀"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠃⠀⠀⠀⠀⣀⣀⠀⠀⣻⡇⠀⣤⣬⣧⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⢹⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡇"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⠿⣿⡟⠀⠀⠀⠀⣹⣋⡉⠉⠉⠉⠙⠶⠍⠉⠉⠙⠳⣄⠀⠀⠀⠀⣠⡶⣿⠛⢿⣀⡾⣷⣀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣷⣶⣦⡀"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⣀⣴⡿⠋⠀⠀⣿⡇⠀⠀⠀⠀⠃⠙⢧⣄⠀⠀⠀⠀⠀⠀⠀⠀⡴⠈⠛⠒⠒⠉⢡⠀⠈⠉⠉⠉⠀⠈⠙⠓⠲⢤⣀⠀⠀⠀⠀⣸⡇⠀⠹⣷⡄"<<std::endl;
std::cout <<"⠀⠀⢀⣤⣶⣾⠟⠉⠀⢀⣠⣾⣿⠁⠀⠀⠀⠀⠀⠀⠀⠉⠳⣤⡀⠀⠀⠀⠀⡼⠁⠀⠀⠀⠀⠀⠘⡆⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⠟⢷⣄⠀⠀⣿⣷⡀⠀⠙⢿⣆"<<std::endl;
std::cout <<"⣴⡾⠛⠋⠟⠁⠀⢀⣴⣿⣻⠽⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣷⣤⣀⠀⠙⠀⠀⠀⠀⠀⠀⢠⠇⠀⠀⠀⠀⠀⢀⣠⡴⠟⠁⠀⠀⠈⠀⠀⣿⢿⣷⡀⠀⠀⠹⣿⢶⣦⣄⡀"<<std::endl;
std::cout <<"⠁⠀⠀⠀⠀⢀⣴⣿⠟⠋⠀⠀⢿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠻⢽⣛⡿⠷⣦⣄⣠⣤⡤⠤⠤⢤⣤⣶⠿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⣿⠷⣽⣧⠀⠀⠀⠈⠓⠈⠙⠛"<<std::endl;
std::cout <<"⠀⠀⠀⠀⣠⣿⠟⠁⠀⠀⠀⠀⠘⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠛⠒⠒⠒⠒⠒⠚⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡿⠀⠙⢿⣇"<<std::endl;
std::cout <<"⠀⠀⠀⢠⣿⠁⠀⠀⠀⠀⠀⠀⠀⠘⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠃⠀⠀⠀⢻⡄"<<std::endl;
std::cout <<"⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡿⠃⠀⠀⠀⠀⠸⣿"<<std::endl;
std::cout <<"⠀⠀⠀⠸⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⠟⠀⠀⠀⠀⠀⠀⢸⡟"<<std::endl;
std::cout <<"⠀⠀⠀⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡿⠛⠁⠀⠀⠀⠀⠀⠀⠀⣾⠁"<<std::endl;
std::cout <<"⠀⠀⠀⠸⡌⢿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⣿⣾⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣾⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡇"<<std::endl;
std::cout <<"⠀⠀⠀⠀⢹⣄⠙⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⢿⣶⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣾⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠹⣆⠈⠻⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠻⠿⣷⣶⣶⣶⣶⣶⣶⠿⠿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⠃"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠘⣦⡀⠈⠻⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⣱⠏"<<std::endl;
std::cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣤⡀⠈⠛⢶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⢟⣱⠏"<<std::endl;	

exit(0);
			}
	}
	return(0);
}

