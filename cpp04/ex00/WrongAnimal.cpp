/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:54 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/05 17:38:43 by aouaziz          ###   ########.fr       */
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

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& animal)
{
    this->type = animal.type;
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