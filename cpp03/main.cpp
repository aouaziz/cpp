/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 04:21:52 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/29 04:29:26 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap a;
	FragTrap b("Cody");
	a.guardGate();
	std::cout << "\n -------------a vs b-------------\n";
	for (int i = 0; i < 6; i++)
	{
		std::cout << "\n -------------b attack a-------------\n";
		b.attack(a.getName());
		a.takeDamage(b.getAttack_damage());
		std::cout << "\n -------------a attack b-------------\n";
		a.attack(b.getName());
		b.takeDamage(a.getAttack_damage());		
		std::cout << "\n-------> "<<a.getName() << " has a health of " << a.getHit_points() <<"<-------"<< std::endl;
		std::cout <<"\n-------> "<< b.getName() << " has a health of " << b.getHit_points() <<"<-------"<< std::endl;
	}
	std::cout << "\n";
	a.guardGate();
	b.highFivesGuys();
	return (0);
}