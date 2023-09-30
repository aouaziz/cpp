/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 04:32:38 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/30 06:36:21 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << NAME << " and my ClapTrap name is " << ClapTrap::NAME << std::endl;
}

DiamondTrap::DiamondTrap() :ClapTrap("Default_clap_name")
{
    this->NAME = "Default";
    this->Hit_points= FragTrap::Hit_points;
    this->Attack_damage=FragTrap::Attack_damage;
    this->Energy_points=ScavTrap::Energy_points;
    std::cout << "DiamondTrap " << this->NAME << " is constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name+"_clap_name")
{
    this->NAME = name;
    this->Hit_points= FragTrap::Hit_points;
    this->Attack_damage=FragTrap::Attack_damage;
    this->Energy_points=ScavTrap::Energy_points;
    std::cout << "DiamondTrap " << this->NAME << " is constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& object):ClapTrap(object),FragTrap(object),ScavTrap(object)
{
    *this = object;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& object)
{
    this->NAME = object.NAME;
    ClapTrap::NAME = NAME+"_clap_name";
    this->Hit_points= object.Hit_points;
    this->Attack_damage=object.Attack_damage;
    this->Energy_points=object.Energy_points;
    return(*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->NAME << " is destructed!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
std::string  DiamondTrap::getName()
{
    return(this->NAME);
}