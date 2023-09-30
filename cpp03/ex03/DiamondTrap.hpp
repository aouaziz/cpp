/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 04:32:44 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/30 06:39:31 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public FragTrap , public ScavTrap
{
    private:
    std::string NAME;
    public:
    DiamondTrap();
    DiamondTrap(std::string Name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& object);
    DiamondTrap &operator=(const DiamondTrap& object);
    void whoAmI();
    void attack(const std::string& target);
    std::string getName();
};

#endif