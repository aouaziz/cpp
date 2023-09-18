/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:48:39 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/14 19:22:51 by aouaziz          ###   ########.fr       */
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
		struct list
		{
			std::string level;
			void	(Harl::*flex)(void);
		};
		list _l[4];
};
#endif