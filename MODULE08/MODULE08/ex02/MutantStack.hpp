/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:28:12 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/20 22:30:57 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
	MutantStack() {}  //constructor
	
	MutantStack(const MutantStack &src) //copy constructor
	{
		*this = *src;	
	}
	~MutantStack() {} //Destructor
	
	//=================OPERATION===================

	MutantStack &operator=(const MutantStack &src)
	{
		std::stack<T>::c = src.c;
		return *this;
	}
	//=====================ITERATOR============================
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}
	iterator end()
	{
		return (std::stack<T>::c.end());
	}
};

#endif