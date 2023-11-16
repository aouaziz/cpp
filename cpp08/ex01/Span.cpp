/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:46:33 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/16 14:57:07 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int n)
{
    max = n;
}

Span::Span(const Span &object)
{
    *this = object;
}

Span &Span::operator=(const Span &object)
{
    max = object.max;
    v = object.v;
    return(*this);
}

void Span::addNumber(int n)
{
   if(v.size() >= max)
        throw std::out_of_range("Span is already full");
    v.push_back(n);
}

unsigned int Span::shortestSpan() {
    if (this->v.size() <= 1)
        throw std::logic_error("Not enough numbers to calculate span");
    std::sort(v.begin(),v.end());
    unsigned int span = v[1] - v[0];
    for(size_t i = 0; i < max ; i++)
    {   
        if(span > (v[i + 1] - v[i]))
            span = v[i + 1] - v[i];
    }
    return(span);

}
unsigned int Span::longestSpan()
{
    if (this->v.size() <= 1)
        throw std::logic_error("Not enough numbers to calculate span");
    
    unsigned int Max = (*std::max_element(v.begin(),v.end()) - *std::min_element(v.begin(),v.end()));
    return(Max);
}

Span::~Span(){}