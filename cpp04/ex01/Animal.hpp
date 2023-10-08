/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:42:55 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/07 17:28:30 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class Animal
{
    protected:
        std::string type;
    public:
    Animal();
    Animal(std::string Type);
    Animal(const Animal& animal);
    Animal &operator=(const Animal& animal);
    std::string getType(void) const;
    ~Animal();
    virtual void makeSound() const ;
};


#endif
