/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:28:05 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/12 15:52:21 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

long unsigned int countSpice(std::string data);

HumanB::HumanB(std::string Name)
{
    if(Name == "" || Name.size() == countSpice(Name))
    {
        std::cout <<  "Invalid Name of HumanB requested.\n";
        this->name = "";
        return;
    }
    this->name = Name;
    std::cout << "HumanB [" << this->name << "] is created ";
}

HumanB::~HumanB()
{
    if(this->name == "")
        return;
    std::cout << "HumanB [" << this->name << "] is dead" << std::endl;
}

void HumanB::attack(void)
{
    if(this->name == "")
        return;
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& Weapon)
{
    this->weapon = &Weapon;
}
