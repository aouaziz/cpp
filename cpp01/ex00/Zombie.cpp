/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:58:57 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/18 02:02:59 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

long unsigned int countSpice(std::string data);

void Zombie::announce(void)
{
    if(this->name == "")
        return;
    std::cout << this->name << ": BraiiiiiiinnnzzzZ... \n"; 
}

Zombie::Zombie(std::string Name)
{
    if(Name == "" || Name.size() == countSpice(Name))
    {
        std::cout <<  "Invalid Name of Zombie requested.\n";
        this->name = "";
        return;
    }
    this->name = Name;
    std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
    if(this->name == "")
        return;
    std::cout << this->name << " has been destroyed." << std::endl;
}