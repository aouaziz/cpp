/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:24 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/10 17:16:20 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog:public AAnimal{
    private:
        Brain *brain;
    public:
    Dog();
    Dog(std::string name);
    
    Dog(const Dog& object);
    Dog &operator=(const Dog& object);

    ~Dog();
	
    void makeSound() const ;
};

#endif