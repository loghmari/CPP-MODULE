/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:08:16 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/19 23:10:12 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
	std::vector<int> test(5, 7);
	test.push_back(5);
	test.push_back(75);
	test.push_back(4664);
	test.push_back(0);
	test.push_back(98);
	test.push_back(102);
	test.push_back(2354514);
	easyfind(test, 102);
}