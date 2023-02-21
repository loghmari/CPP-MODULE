/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:12:06 by sloghmar          #+#    #+#             */
/*   Updated: 2023/01/16 12:06:46 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "number of argument invalid" << std::endl;
		return(0);
	}
	std::string input_file = argv[1];
	std::string old_str = argv[2];
	std::string new_str = argv[3];

	std::string output_file = input_file + ".replace";

	if(new_str.empty())
	{
		std::cout << "Error: string is empty" << std::endl;
		return(0);
	}

	std::ifstream read_file;
	read_file.open(input_file);
	if(read_file.fail())
	{
		std::cout << "fail to open" << std::endl;
		return(0);
	}

	std::ofstream write_file;
	write_file.open(output_file);
	if(write_file.fail())
	{
		std::cout << "fail to open" << std::endl;
		return(0);
	}

	std::string str;
	size_t pos;
	
	while(std::getline (read_file, str))
	{
		while((pos = str.find(old_str)) != std::string::npos)
		{
			write_file << str.substr(0, pos);
			str.erase(0, pos + old_str.length());
			write_file << new_str;
		}
	write_file << str << std::endl;
	}
	write_file.close();
	read_file.close();
	return(0);
}

