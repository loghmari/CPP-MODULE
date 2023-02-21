/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:12:11 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/21 11:12:40 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span 
{
	private:
		std::vector<int> m_tab;
		unsigned int m_N;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &src);
		~Span();
		Span& operator=(Span const &src);

		void addNumber(int nb);		 
		int shortestSpan();
		int longestSpan();
		void addRange(unsigned int span_size);

//============EXCEPTION======================

		class SpanFull : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Exception : Span is Full";
				}
	
		};

		class NotEnoughElement : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Exception : Not enough element";
				}
	
		};

		class TooMany : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					std::cout << "Exception : Tried too many in span" << std::endl;
					exit(0);	
				}
		};
	
};
#endif