/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:00:42 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/29 03:49:56 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    private:
    bool Guard_Gate;
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap& object);
    ScavTrap &operator=(const ScavTrap& object);
    void guardGate();
    void attack(const std::string& target);
};

#endif