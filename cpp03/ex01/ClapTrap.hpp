/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 04:22:12 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/28 18:52:24 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    private:
    std::string NAME;
    unsigned int Hit_points;
    unsigned int Energy_points;
    unsigned int Attack_damage;
    public:
    //
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& object);
    ClapTrap &operator=(const ClapTrap& object);
    ~ClapTrap();
    //
    void setHit_points(unsigned int amount);
    void setEnergy_points(unsigned int amount);
    void setAttack_damage(unsigned int amount);
    void setName( std::string name);
    unsigned int getHit_points();
    unsigned int getEnergy_points();
    unsigned int getAttack_damage();
    std::string getName();
    //
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif