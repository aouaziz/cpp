/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:24:01 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/27 18:47:08 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//

std::ostream &operator<<(std::ostream& COUT, const Fixed& object)
{
    COUT << object.toFloat();
    return(COUT);
}
Fixed &Fixed::operator=(const Fixed& origenal)
{
    this->number = origenal.getRawBits();
    return(*this);
}

float Fixed::operator+(const Fixed& other) const
{
    return(this->toFloat() + other.toFloat());
}
float Fixed::operator-(const Fixed& other) const
{
    return(this->toFloat() - other.toFloat());
}
float Fixed::operator*(const Fixed& other) const
{
    return(this->toFloat() * other.toFloat());
}
float Fixed::operator/(const Fixed& other) const
{
    return(this->toFloat() / other.toFloat());
}

bool Fixed::operator>(const Fixed& other) const
{
    return(this->toFloat() > other.toFloat());
}
bool Fixed::operator>=(const Fixed& other) const
{
    return(this->toFloat() >= other.toFloat());
}
bool Fixed::operator<(const Fixed& other) const
{
    return(this->toFloat() < other.toFloat());
}
bool Fixed::operator<=(const Fixed& other) const
{
    return(this->toFloat() <= other.toFloat());
}
bool Fixed::operator==(const Fixed& other) const
{
    return(this->toFloat() == other.toFloat());
}
bool Fixed::operator!=(const Fixed& other) const
{
    return(this->toFloat() != other.toFloat());
}
//

Fixed::Fixed()
{
    this->number = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
}

Fixed::Fixed(const int value)
{
    this->number = value << this->shift;
}

Fixed::Fixed(const float value)
{
    this->number = roundf(value *(1 << this->shift)); 
}
Fixed::~Fixed()
{
}

//

Fixed& Fixed::operator++() {
    this->number++;
    return *this;
}
Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    ++this->number;   
    return tmp;  
}
Fixed& Fixed::operator--() {
    this->number--;
    return *this;
}
Fixed Fixed::operator--(int) {
    Fixed tmp(*this); 
    --this->number;        
    return tmp;      
}

//

Fixed& Fixed::min(Fixed& a, Fixed& b) 
{
    if(a.toFloat() > b.toFloat())
        return(b);
    return(a);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) 
{
    if(a.toFloat() > b.toFloat())
        return(b);
    return(a);
}
Fixed& Fixed::max( Fixed& a,  Fixed& b) 
{
    if(a.toFloat() > b.toFloat())
        return(a);
    return(b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) 
{
    std::cout << "ana hana \n";
    if(a.toFloat() > b.toFloat())
        return(a);
    return(b);
}

//

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