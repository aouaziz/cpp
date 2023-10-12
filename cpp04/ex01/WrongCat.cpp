/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:19 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/11 19:26:23 by aouaziz          ###   ########.fr       */
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

WrongCat::WrongCat(const WrongCat& object):WrongAnimal(object)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
	this->brain = new Brain(*object.brain);
	*this = object;
        
}
WrongCat &WrongCat::operator=(const WrongCat& object)
{
	if(this != &object)
	{
		this->type = object.type;
	}
	return(*this);
}

WrongCat::~WrongCat(){
        std::cout << " WrongCat destructor called." << std::endl;
        delete brain;
}


void WrongCat::makeSound()const
{
        std::cout << "meows meows\n"; 
}
