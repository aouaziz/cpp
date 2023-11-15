/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:29:32 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/15 17:46:09 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
    std::vector<unsigned int> v;
public:
    Span(unsigned int n);
    Span(Span & const object);
    Span &operator=(Span & const object);
    void addNumber(int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    ~Span();

};



#endif