/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:20:58 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/10 18:40:13 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = "Brain ideas";
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
    delete [] ideas;
}

Brain::Brain(const Brain& object)
{
    std::cout << "Brain copy constructor called." << std::endl;
    this->ideas = new std::string[100];
    *this = object;

}
 Brain &Brain::operator=(const Brain& object)
 {
    if(this != &object)
    {
        for (size_t i = 0; i < 100; i++)
            this->ideas[i] = object.ideas[i] ;
    }
    return(*this);
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