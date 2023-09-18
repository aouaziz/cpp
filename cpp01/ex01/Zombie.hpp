/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:39:16 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/11 16:03:25 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

    private:
    std::string name;
    public:
    Zombie();
    Zombie(std::string Name);
    ~Zombie();
    void setName(std::string Name);
    void announce( void );
};

#endif