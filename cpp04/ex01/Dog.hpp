/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:24 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/08 14:56:11 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal{
    private:
        Brain* ideas;
    public:
    Dog();
    Dog(std::string name);
	void makeSound() const ;
    Brain *getBrain( void ) const;
    ~Dog();
};

#endif