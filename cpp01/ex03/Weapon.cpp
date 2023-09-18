/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:27:19 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/12 15:53:27 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

long unsigned int countSpice(std::string data);

Weapon::Weapon()
{
    this->type = "Default";
    std::cout << "Weapon object [" << this->type << "]has been created" << std::endl;
}

Weapon::Weapon(std::string Type)
{
    if(Type == "" || Type.size() == countSpice(Type))
    {
        std::cout <<  "Invalid type of Weapon requested.\n";
        this->type = "";
        return;
    }
    this->type = Type;
    std::cout << "Weapon object [" << this->type << "] has been created" << std::endl;
}

Weapon::~Weapon()
{
    if(this->type == "")
        return;
  std::cout << "Weapon object [" << this->type << "] has been destroyed" << std::endl;

}

void  Weapon::setType(std::string Type)
{
    if(Type == "" || Type.size() == countSpice(Type))
    {
        std::cout <<  "Invalid type of Weapon requested.\n";
        this->type = "";
        return;
    }
    this->type = Type;
}

std::string Weapon::getType(void)
{
    return(this->type);
}

