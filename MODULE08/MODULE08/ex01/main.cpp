/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:47:23 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/21 10:59:09 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{

	std::cout <<"----------------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout <<"---------with negatif-------------" << std::endl;
	}
	{
		Span span(5);
		span.addNumber(1);
		span.addNumber(7);
		span.addNumber(5);
		span.addNumber(-5);

		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	std::cout <<"---------exception not enough------------" << std::endl;

	{
		try
		{
			Span span(1);
			span.addNumber(1);
			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		
	}
	std::cout <<"--------exception full--------------" << std::endl;

	{
		Span span(5);

		try
		{
			for (int i = 0; i < 7; i++)
			{
				span.addNumber(i);
			}
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout <<"--------with random range--------------" << std::endl;
	{
		Span Sp = Span(6);

		Sp.addRange(5);

		std::cout << Sp.shortestSpan() << std::endl;
		std::cout << Sp.longestSpan() << std::endl;
	}

	std::cout <<"---------exception too many-------------" << std::endl;

	{
		
		Span Sp = Span(10);

		Sp.addRange(11);

		std::cout << Sp.shortestSpan() << std::endl;
		std::cout << Sp.longestSpan() << std::endl;

	}
}

