/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:42:55 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/02 10:50:09 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
    Animal();
    Animal(std::string Type);
    Animal(const Animal& animal);
    Animal &operator=(const Animal& animal);
    ~Animal();
    virtual void makeSound() const = 0;
};


#endif
