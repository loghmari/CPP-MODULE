/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:41:04 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/17 14:54:13 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
	#define ITER_HPP
#include<iostream>

template<typename T>

void Iter( T tab[],const int size, void (*ft)(const T &value))
{
	for (int i = 0; i < size; i++)
	{
		ft(tab[i]);
	}	
}

#endif