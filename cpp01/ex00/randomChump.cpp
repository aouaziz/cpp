/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:59:46 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/18 02:02:08 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

long unsigned int countSpice(std::string data)
{
	long unsigned int i;
    i = 0;
    
	while( i < data.size())
    {
        if(data[i] != ' ' && data[i] != '\t')
            break;
        i++;
    }
    return(i);
}

void randomChump( std::string name )
{
    if(name == "" || name.size() == countSpice(name))
    {
        std::cout << "randomChump  has no name to create a zombie\n";
        return;
    }
    Zombie zombie(name);
    zombie.announce();
}