/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:20:58 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/08 15:31:53 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = "Brain ideas";
    }
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
    delete [] (this->ideas);
    std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(Brain& object)
{
    std::string *New = object.getideas();
    this->ideas = new std::string[100];
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = New[i] ;
    }
    std::cout << "Brain copy constructor called." << std::endl;
}

std::string *Brain::getideas()
{
    return(this->ideas);
}
void Brain::setideas(std::string idea)
{
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = idea;
    }
    
}