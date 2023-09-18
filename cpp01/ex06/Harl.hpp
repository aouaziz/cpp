/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:26:03 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/15 15:44:02 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
    private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
    public:
		Harl();
		~Harl();
		void complain( std::string level );
		std::string level[4];
};
#endif