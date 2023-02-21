/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:27:04 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/21 11:10:13 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "=======TOP======" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "======SIZE=======" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "======SIZE POP(-1)=======" << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << "=======IT=========" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	
	MutantStack<int>::iterator ite = mstack.end();
	
	//++it;
	//--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		std::cout << "---------------" << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}