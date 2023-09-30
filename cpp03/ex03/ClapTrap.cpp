/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 04:22:04 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/30 05:55:19 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->NAME = "Default";
    this->Attack_damage =0;
    this->Energy_points =10;
    this->Hit_points = 10;
    std::cout << this->NAME << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& object)
{
    *this = object;
}
ClapTrap::ClapTrap(std::string name)
{
    this->NAME = name;
    this->Energy_points =10;
    this->Hit_points = 10;
    this->Attack_damage = 0;
    std::cout << this->NAME << " has been created." << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap& object)
{
    this->Attack_damage =object.Attack_damage;
    this->Energy_points = object.Energy_points;
    this->Hit_points = object.Hit_points;
    this->NAME = object.NAME;
    return(*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << this->NAME << " has been destroyed." << std::endl;
}

//

void ClapTrap::attack(const std::string& target)
{
    if(this->Hit_points == 0 || this->Energy_points == 0)
    {
        std::cout << "ClapTrap " << this->NAME << " can't attack " << target << " because he has no hit points or energy points.\n";
        return;
    }
    std::cout << "ClapTrap " << this->NAME << " attacks " << target << ", causing " << this->Attack_damage << " points of damage." << std::endl;
    this->Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->Hit_points == 0 )
    {
        std::cout << "ClapTrap " << this->NAME << " can't takes damage because he has no hit points .\n";
        return;
    }
    std::cout << "ClapTrap " << this->NAME << " takes damage, losing " << amount << " points of health." << std::endl;
    if(amount > this->Hit_points)
        this->Hit_points = 0;
    else
        this->Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
     if(this->Energy_points == 0 )
    {
        std::cout << "ClapTrap " << this->NAME << " can't repaired because he has no energy points .\n";
        return;
    }
    std::cout << "ClapTrap " << this->NAME << " is repaired, gaining " << amount << " points of health." << std::endl;
    this->Hit_points += amount;
    this->Energy_points--;
}
//

void ClapTrap::setAttack_damage(unsigned int amount)
{
    this->Attack_damage = amount;
}

void ClapTrap::setEnergy_points(unsigned int amount)
{
    this->Energy_points = amount;
}

void ClapTrap::setHit_points(unsigned int amount)
{
    this->Hit_points = amount;
}

void ClapTrap::setName( std::string name)
{
    this->NAME = name;
}

unsigned int ClapTrap::getAttack_damage()
{
    return(this->Attack_damage);
}

unsigned int ClapTrap::getEnergy_points()
{
    return(this->Energy_points);
}

unsigned int ClapTrap::getHit_points()
{
    return(this->Hit_points);   
}
std::string  ClapTrap::getName()
{
    return(this->NAME);
}