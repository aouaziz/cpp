/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:27:47 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/12 15:52:06 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


long unsigned int countSpice(std::string data)
{
	long unsigned int i;
    i = 0;
    
	while( i < data.size())
    {
        if(data[i] != ' ' && data[i] != '\t')
            break;
        i++;
    }
    return(i);
}

HumanA::HumanA(std::string Name,Weapon& Weapon) : name(Name), weapon(Weapon)
{   
    if(Name == "" || Name.size() == countSpice(Name))
    {
        std::cout <<  "Invalid Name of HumanB requested.\n";
        this->name = "";
        return;
    }
    std::cout << "HumanA [" << this->name << "] created with ";
	std::cout << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
     if(this->name == "")
        return;
    std::cout << "HumanA [" << this->name << "] is dead" << std::endl;
}

void HumanA::attack(void)
{
     if(this->name == "")
        return;
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
