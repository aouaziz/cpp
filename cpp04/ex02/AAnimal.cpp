/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:42:50 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/10 16:14:08 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << "Default AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal(std::string Type)
{
    this->type = Type;
    std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& AAnimal)
{
    std::cout << "AAnimal copy constructor called." << std::endl;
    *this = AAnimal;
}

AAnimal &AAnimal::operator=(const AAnimal& AAnimal)
{
    if(this != &AAnimal)
        this->type = AAnimal.type;
    return(*this);
}

AAnimal::~AAnimal()
{
    std::cout << " AAnimal destructor called." << std::endl;
}
std::string AAnimal::getType(void) const
{
    return(this->type);   
}
