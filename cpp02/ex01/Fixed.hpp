/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:24:04 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/27 18:20:32 by aouaziz          ###   ########.fr       */
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
    Fixed();
    Fixed(const int value);
    Fixed(const Fixed& copy);
    Fixed(const float value);
    ~Fixed();
    Fixed &operator=(const Fixed& origenal);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream& COUT, const Fixed& object);	

#endif