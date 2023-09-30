/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 04:14:42 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/30 05:54:20 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "FragTrap " << this->NAME << " is constructed!" << std::endl;
    this->Attack_damage =30;
    this->Energy_points =100;
    this->Hit_points = 100;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "FragTrap " << this->NAME << " is constructed!" << std::endl;
    this->Attack_damage =30;
    this->Energy_points =100;
    this->Hit_points = 100;
}

FragTrap::FragTrap(const FragTrap& object):ClapTrap(object)
{
    *this = object;
}

FragTrap &FragTrap::operator=(const FragTrap& object)
{
    this->Attack_damage =object.Attack_damage;
    this->Energy_points = object.Energy_points;
    this->Hit_points = object.Hit_points;
    this->NAME = object.NAME;
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->NAME << " is destructed!" << std::endl;
}
void   FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << NAME << " requests a high five!" << std::endl;
}