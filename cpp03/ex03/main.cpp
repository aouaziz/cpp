/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 04:21:52 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/30 06:37:15 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    std::cout << "\n---> TESTING DIAMONDTRAP <---\n" << std::endl;
        DiamondTrap a;
        DiamondTrap b("goju");
        DiamondTrap c(a);

        std::cout << "\n---> Testing DiamondTrap <---\n" << std::endl;
        a.whoAmI();
        a.attack(b.getName());
        b.whoAmI();
        b.attack(c.ClapTrap::getName());
        c.whoAmI();
        std::cout << "\n---> Deconstructing DiamondTrap <---\n" << std::endl;

    return 0;
}
