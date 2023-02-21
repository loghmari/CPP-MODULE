/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:18:16 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/21 11:02:54 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	//std::cout << "Span Default Constructor" << std::endl;
}

Span::Span(Span const &src)
{
	//std::cout << "Span Copy Constructor" << std::endl;
	m_tab = src.m_tab;
	m_N = src.m_N;
}

Span::Span(unsigned int N)
{
	//std::cout << "Span Parameter Constructor" << std::endl;
	m_N = N;
}

Span::~Span()
{
	//std::cout << "Span Destructor" << std::endl;
}

Span& Span::operator=(Span const &src)
{
	//std::cout << "Span assignement operator" << std::endl;
	m_tab = src.m_tab;
	m_N = src.m_N;
	return *this;
}

void Span::addNumber(int N)
{
	if (m_tab.size() < m_N)
		m_tab.push_back(N);
	else
		throw Span::SpanFull();
}


int Span::shortestSpan()
{
	if (m_tab.size() < 2)
		throw NotEnoughElement();
	
	int diff = 0;
	int tmp_diff = 0;
	for (size_t i = 0; i < m_tab.size() - 1; i++)
	{
		tmp_diff = abs(m_tab[i + 1] - m_tab[i]);
		if (i == 0)
			diff = tmp_diff;
		else if (tmp_diff < diff)
			diff = tmp_diff;	
	}
	return diff;
}

int Span::longestSpan()
{
	if (m_tab.size() < 2)
		throw NotEnoughElement();
		
	int diff = 0, tmp_diff = 0;
	for (size_t i = 0; i < m_tab.size() - 1; i++)
	{
		tmp_diff = abs( m_tab[i + 1] - m_tab[i]);
		if (tmp_diff > diff)
			diff = tmp_diff;
	}
	return diff;
}


void Span::addRange(unsigned int span_size)
{
	int nb = 0;
	srand(time(NULL));

    if (m_N  <= span_size)
			throw TooMany();
	
	else
    {
        for (unsigned int i = 0; i < span_size; i++)
		{
			nb = rand();
			std::cout << nb << std::endl;
			addNumber(nb);
		}
		std::cout << "==========" << std::endl;
	}
}
