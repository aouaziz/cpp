/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:59:49 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/18 02:01:55 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

long unsigned int countSpice(std::string data);

Zombie* newZombie( std::string name )
{
    if(name == ""  || name.size() == countSpice(name))
    {
        std::cout << "newZombie  has no name to create a zombie\n";
        return(NULL);
    }
    return(new Zombie(name));
}