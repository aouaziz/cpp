/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:42 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/14 14:00:32 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Default Cat constructor called." << std::endl;
	this->brain = new Brain();
}

Cat::Cat(std::string name):Animal(name)
{
    std::cout << "Cat constructor called." << std::endl;
    this->brain = new Brain();
}
Cat::Cat(const Cat& object):Animal(object)
{
    std::cout << "Cat copy constructor called." << std::endl;
	brain = new Brain();	
	*this = object;
        
}

Cat &Cat::operator=(const Cat& object)
{
	if(this != &object)
	{
		this->Animal::operator=(object);
		delete this->brain;
		this->brain = new Brain(*object.brain);
	}
	return(*this);
}
void Cat::makeSound()const
{
    std::cout << "meows meows\n"; 
}
Cat::~Cat(){
    std::cout << " Cat destructor called." << std::endl;
	delete this->brain;
}

std::string *Cat::getideas()
{
	return(this->brain->getideas());
}
void Cat::setideas(std::string idea)
{
	this->brain->setideas(idea);
}