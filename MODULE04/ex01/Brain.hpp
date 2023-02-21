/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:42:46 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/07 11:09:55 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
	#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain &src);
		~Brain();
		Brain & operator=(const Brain &src);

	private:
		std::string Ideas[100];

};

#endif