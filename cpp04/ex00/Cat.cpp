/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:42 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/14 13:13:02 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
        std::cout << "Default Cat constructor called." << std::endl;
}
Cat::Cat(std::string name):Animal(name)
{
        std::cout << "Cat constructor called." << std::endl;
}
Cat::~Cat(){
        std::cout << " Cat destructor called." << std::endl;
}
void Cat::makeSound()const
{
        std::cout << "meows meows\n"; 
}

Cat::Cat(const Cat& object):Animal(object)
{
    std::cout << "Cat copy constructor called." << std::endl;
	*this = object;
        
}

Cat &Cat::operator=(const Cat& object)
{
	if(this != &object)
		this->type = object.type;
	return(*this);
}
