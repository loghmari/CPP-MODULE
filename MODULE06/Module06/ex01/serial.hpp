/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:45:58 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/14 16:35:12 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
	#define SERIAL_HPP
#include <iostream>

struct Data
{
	int i;
	std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif