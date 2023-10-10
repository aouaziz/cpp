/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:42 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/10 17:16:47 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():AAnimal("Cat")
{
	this->brain = new Brain();
	std::cout << "Default Cat constructor called." << std::endl;
}

Cat::Cat(std::string name):AAnimal(name)
{
    std::cout << "Cat constructor called." << std::endl;
    this->brain = new Brain();
}
Cat::Cat(const Cat& object):AAnimal(object)
{
    std::cout << "Cat copy constructor called." << std::endl;
	*this = object;
        
}

Cat &Cat::operator=(const Cat& object)
{
	if(this != &object)
	{
		this->brain = new Brain(*object.brain);
		this->type = object.type;
	}
	return(*this);
}
void Cat::makeSound()const
{
    std::cout << "meows meows\n"; 
}
Cat::~Cat(){
    delete this->brain;
    std::cout << " Cat destructor called." << std::endl;
}
