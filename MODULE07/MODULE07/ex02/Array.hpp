/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:56:34 by sloghmar          #+#    #+#             */
/*   Updated: 2023/02/17 15:26:10 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
	#define ARRAY_HPP
#include <iostream>

template<typename T>

class Array
{
	public:

	//=========CONST-DESTRUCTOR================================

		Array():m_tab(0), m_size(0){}
		Array(unsigned int n){
			 m_tab = new T[n];
			 m_size = n;
			// std::cout << "unsigned int n constructor" << std::endl;
			}

		Array(Array const &src)
		{

			m_tab = src.m_tab; 
			m_size = src.m_size; 
		 	*this = src; 
		}
		
		~Array(){
			 delete[] m_tab;
		}
	
	//==============operator===============================
		
		Array& operator=(Array const &src){
			m_tab = new T[src.m_size];
			m_size = src.m_size;
			for(unsigned int i = 0;i < m_size;i++)
		  		m_tab[i] = src.m_tab[i];
			return *this;
		}

		T &operator[](unsigned int i) {
			if (i >= m_size)
				throw invalidTabIndex();
			return m_tab[i];
		}	
//===================METHOD================
		
		int size() {return (m_size);}
		
		void print()
		{
			for(int i = 0;m_tab[i];i++)
				std::cout << m_tab[i] << std::endl;
		}
//================EXCEPTION==========================
			class invalidTabIndex : public std::exception 
			{
				public:
				const char * what() const throw()
				{
					return "Exception Invalid tab index!";
				}
			};

	private:
		T *m_tab;
		unsigned int m_size;

};

#endif 