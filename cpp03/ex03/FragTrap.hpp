/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 04:14:50 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/30 06:01:39 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:virtual public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap& object);
    FragTrap &operator=(const FragTrap& object);
    void highFivesGuys(void);
};

#endif