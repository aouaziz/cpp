/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:46:49 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/14 19:23:24 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() 
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here last month." << std::endl;
}

void Harl::error()
 {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}
    
Harl::Harl()
{
    this->_l[0].level = "DEBUG";
    this->_l[1].level = "INFO";
    this->_l[2].level = "ERROR";
    this->_l[3].level = "WARNING";
    this->_l[0].flex = &Harl::debug;
    this->_l[1].flex =  &Harl::info;
    this->_l[2].flex = &Harl::warning;
    this->_l[3].flex = &Harl::error;
}
Harl::~Harl()
{

}

void Harl::complain(std::string level)
{
    for(int i = 0; i < 4 ;i++)
    {
        if(this->_l[i].level == level)
        {
            (this->*_l[i].flex)();
            break;
        }
    }
    return;
}
