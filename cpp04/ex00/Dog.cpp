/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:18 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/14 13:11:33 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
        std::cout << "Default Dog constructor called." << std::endl;
}
Dog::Dog(std::string name):Animal(name)
{
        std::cout << "Dog constructor called." << std::endl;
}
Dog::~Dog(){
        std::cout << " Dog destructor called." << std::endl;
}

void Dog::makeSound()const
{
        std::cout << "haw haw\n"; 
}

Dog::Dog(const Dog& object):Animal(object)
{
    std::cout << "Dog copy constructor called." << std::endl;
    	*this = object;
        
}
Dog &Dog::operator=(const Dog& object)
{
	if(this != &object)
		this->type = object.type;
	return(*this);
}