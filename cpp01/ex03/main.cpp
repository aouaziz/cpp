/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:00:19 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/12 15:55:54 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    Weapon club1 = Weapon("crude spiked club");
    std::cout << club1.getType() << std::endl;
    HumanA bob("Bob", club1);
    bob.attack();
    club1.setType("some other type of club1");
    bob.attack();
    Weapon club = Weapon("AK47");
    HumanB jim("ayoub");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club2");
    jim.attack();
    
}