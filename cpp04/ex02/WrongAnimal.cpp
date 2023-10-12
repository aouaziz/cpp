/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:54 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/12 07:37:10 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string Type)
{
    this->type = Type;
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& AAnimal)
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = AAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& AAnimal)
{
    this->type = AAnimal.type;
    return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << " WrongAnimal destructor called." << std::endl;
}
std::string WrongAnimal::getType(void) const
{
    return(this->type);   
}
void WrongAnimal::makeSound() const
{
    std::cout << "tooot tooot" << std::endl;
}