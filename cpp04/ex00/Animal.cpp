/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:42:50 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/02 10:49:25 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Default";
    std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(std::string Type)
{
    this->type = Type;
    std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal& animal)
{
    this->type = animal.type;
    return(*this);
}

Animal::~Animal()
{
    std::cout << " Animal destructor called." << std::endl;
}