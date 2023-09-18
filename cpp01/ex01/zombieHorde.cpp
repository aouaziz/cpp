/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:39:09 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/11 16:05:59 by aouaziz          ###   ########.fr       */
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

Zombie* zombieHorde( int N, std::string name )
{
    if(N < 1)
    {
        std::cout <<  "Invalid number of zombies requested.\n";
        return(NULL);
    }
    else if(name == "" || name.size() == countSpice(name))
    {
        std::cout <<  "Invalid name of zombies requested.\n";
        return(NULL);
    }
    Zombie *z = new Zombie[N];

    for(int i =0 ;i<N ;i++)
    {
        z[i].setName(name);
        z[i].announce();
    }
    return(z);
}