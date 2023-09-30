/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:00:29 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/30 05:54:39 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "ScavTrap " << this->NAME << " is constructed!" << std::endl;
    this->Attack_damage =20;
    this->Energy_points =50;
    this->Hit_points = 100;
    this->Guard_Gate = false;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout << "ScavTrap " << this->NAME << " is constructed!" << std::endl;
    this->Attack_damage =20;
    this->Energy_points =50;
    this->Hit_points = 100;
    this->Guard_Gate = false;
}

ScavTrap::ScavTrap(const ScavTrap& object):ClapTrap(object)
{
    *this = object;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& object)
{
    this->Attack_damage =object.Attack_damage;
    this->Energy_points = object.Energy_points;
    this->Hit_points = object.Hit_points;
    this->NAME = object.NAME;
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->NAME << " is destructed!" << std::endl;
}

void ScavTrap::guardGate()
{
    if(this->Guard_Gate == false)
    {
        std::cout << "ScavTrap " <<this->NAME <<"is now guarding the gate.\n";
        this->Guard_Gate = true;
    }
    else 
        std::cout << "ScavTrap " <<this->NAME <<"is already guarding the gate.\n";
}

void ScavTrap::attack(const std::string& target)
{
     if(this->Hit_points == 0 || this->Energy_points == 0)
    {
        std::cout << "ScavTrap " << this->NAME << " can't attack " << target << " because he has no hit points or energy points.\n";
        return;
    }
    std::cout << "ScavTrap " << this->NAME << " attacks " << target << std::endl;
    this->Energy_points--;
}