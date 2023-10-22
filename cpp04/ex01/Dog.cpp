/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:18 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/14 14:56:54 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	brain = new Brain();	
    std::cout << "Default Dog constructor called." << std::endl;
}
Dog::Dog(std::string name):Animal(name)
{
	brain = new Brain();	
    std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& object):Animal(object)
{
    std::cout << "Dog copy constructor called." << std::endl;
	brain = new Brain();	
	*this = object;
        
}
Dog &Dog::operator=(const Dog& object)
{
	if(this != &object)
	{
		this->Animal::operator=(object);
		delete this->brain;
		this->brain = new Brain(*object.brain);
	}
	return(*this);
}

Dog::~Dog(){
        std::cout << " Dog destructor called." << std::endl;
	    delete this->brain;
}

void Dog::makeSound()const
{
        std::cout << "haw haw\n"; 
}

std::string *Dog::getideas()
{
	return(this->brain->getideas());
}

void Dog::setideas(std::string idea)
{
	this->brain->setideas(idea);
}