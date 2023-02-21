/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:59:38 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/15 22:28:23 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
	#define WHATEVER_HPP
#include <iostream>
template<typename T>

void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>

T min(T &a, T &b)
{
	return(a < b ? a : b);
}

template<typename T>

T max(T &a, T &b)
{
	return(a > b ? a : b);
}


#endif