/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:31:06 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/08 15:54:13 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <typename T>

class Array{
    private:
        unsigned int Size;
	    T* array;
    public :
        Array() 
        {
            Size  = 0;
            array = new T[0];
        }
        Array(unsigned int n)
        {
            Size  = n;
            array = new T[n];
        }
        Array(Array const& object)
        {
            Size  = object.Size ;
            array = new T[Size];
            for (size_t i = 0; i < Size;i++)
                array[i] = object.array[i];
        }
        Array &operator=(const Array& object)
        {
            delete [] array;
            Size  = object.Size ;
            array = new T[Size];
            for (size_t i = 0; i < Size;i++)
                array[i] = object.array[i];
            return *this;
        }
        T &operator[](unsigned int  index)
        {
            if( index >= Size )
                throw IndexOutOfBounds();
            return(array[index]);
        }
        ~Array()
        {
            delete [] array;
        }
         class IndexOutOfBounds : public std::exception {
        public:
            virtual const char* what() const throw() { return "Index is out of bounds";}
        };
        unsigned int size() 
        {
           return this->Size;
        }
};

#endif