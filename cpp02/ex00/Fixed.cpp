/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:24:01 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/27 18:17:03 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed &Fixed::operator=(const Fixed& origenal)
{
    std::cout << "Copy assignment operator called\n";
    this->number = origenal.getRawBits();
    return(*this);
}

Fixed::Fixed()
{
    std::cout <<"Default constructor called\n";
    this->number = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout <<"Copy constructor called\n";
    *this = copy;
}

int Fixed::getRawBits()const
{
    std::cout <<"getRawBits member function called\n";
    return(this->number);
}
void Fixed::setRawBits( int const raw )
{
    std::cout <<"setRawBits member function called\n";
    this->number = raw;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}