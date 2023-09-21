/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:24:01 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/21 11:44:42 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::bits = 8;

Fixed &Fixed::operator=(const Fixed& origenal)
{
    std::cout << "Copy assignment operator called\n";
    this->raw_point = origenal.getRawBits();
    return(*this);
}

Fixed::Fixed()
{
    std::cout <<"Default constructor called\n";
    this->raw_point = 0;
}
Fixed::Fixed(const Fixed& copy)
{
    std::cout <<"Copy constructor called\n";
    *this = copy;
}
int Fixed::getRawBits()const
{
    std::cout <<"getRawBits member function called\n";
    return(this->raw_point);
}
void Fixed::setRawBits( int const raw )
{
    std::cout <<"setRawBits member function called\n";
    this->raw_point = raw;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}