/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:26:24 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/15 15:47:38 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << " [ DEBUG ]\n";
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info()
{
    std::cout << " [ INFO ]\n";
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning() 
{
    std::cout << " [ WARNING ]\n";
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here last month.\n" << std::endl;
}

void Harl::error()
 {
    std::cout << " [ ERROR ]\n";
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}
    
Harl::Harl()
{
    this->level[0] = "DEBUG";
    this->level[1] = "INFO";
    this->level[2] = "ERROR";
    this->level[3] = "WARNING";
}
Harl::~Harl()
{

}

void Harl::complain(std::string level)
{
    int i = 0;
    while ( i < 4 && this->level[i] != level)
        i++;
    if(i>=4)
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    while(1)
    {
        if (i >= 4) 
            break;
        switch (i) {
            case 0:
                this->debug();
                break;
            case 1:
                this->error();
                break;
        	case 2:
            	this->info();
            	break;
        	case 3:
            	this->warning();
            	break;
        }
    	i++;
    }
    return;
}
