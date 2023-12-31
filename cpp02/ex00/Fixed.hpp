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

class Fixed
{
	private:
    int number;
    static const int shift = 8;
    public:
    Fixed();
    Fixed(const Fixed& copy);
    ~Fixed();
    Fixed &operator=(const Fixed& origenal);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
		
};

#endif