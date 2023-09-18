/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:28:03 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/12 15:17:59 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
  private:
    std::string name;
    Weapon* weapon;
  public:  
   HumanB(std::string Name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& Weapon);
};


#endif