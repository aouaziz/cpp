/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:24:01 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/27 17:18:48 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed &Fixed::operator=(const Fixed& origenal)
{
    this->number = origenal.getRawBits();
    return(*this);
}

std::ostream &operator<<(std::ostream& COUT, const Fixed& object)
{
    COUT << object.toFloat();
    return(COUT);
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

Fixed::Fixed(const int value)
{
    std::cout <<"Int constructor called\n";
    this->number = value << this->shift;
}

Fixed::Fixed(const float value)
{
    std::cout <<"Float constructor called\n";
    this->number = roundf(value *(1 << this->shift)); 
}
float Fixed::toFloat(void) const
{
    return((float)this->number / (float)( 1 << this->shift));
}
int Fixed::toInt(void) const
{
    return(this->number >> this->shift);
}

int Fixed::getRawBits()const
{
    return(this->number);
}
void Fixed::setRawBits( int const raw )
{
    this->number = raw;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}