/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:24:04 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/21 11:40:02 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>

class Fixed
{
	private:
    int  number;
    static const int shift = 8;

public:
//
    Fixed();
    Fixed(const int value);
    Fixed(const Fixed& copy);
    Fixed(const float value);
    ~Fixed();
    
//
    Fixed &operator=(const Fixed& origenal);
    bool operator>(const Fixed& other) const ;
    bool operator<(const Fixed& other) const ;
    bool operator>=(const Fixed& other) const ;
    bool operator<=(const Fixed& other) const ;
    bool operator==(const Fixed& other) const ;
    bool operator!=(const Fixed& other) const ;
    float operator+(const Fixed& other) const ;
    float operator-(const Fixed& other) const ;
    float operator*(const Fixed& other) const ;
    float operator/(const Fixed& other) const ;

//
	Fixed& operator++();  
	Fixed operator++(int);
	Fixed& operator--();  
	Fixed operator--(int);

//
    static  Fixed& min(Fixed& a, Fixed& b) ;
    static const Fixed& min(const Fixed& a, const Fixed& b) ;
    static  Fixed& max( Fixed& a,  Fixed& b) ;
    static const Fixed& max(const Fixed& a, const Fixed& b) ;

//
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream& COUT, const Fixed& object);	
#endif