/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:19 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/05 17:46:22 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
        std::cout << "Default WrongCat constructor called." << std::endl;
}
WrongCat::WrongCat(std::string name):WrongAnimal(name)
{
        std::cout << "WrongCat constructor called." << std::endl;
}
WrongCat::~WrongCat(){
        std::cout << " WrongCat destructor called." << std::endl;
}
void WrongCat::makeSound()const
{
        std::cout << "meows meows\n"; 
}
