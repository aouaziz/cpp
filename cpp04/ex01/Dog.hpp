/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:24 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/12 07:41:32 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal{
    private:
        Brain *brain;
    public:
    Dog();
    Dog(std::string name);
    
    Dog(const Dog& object);
    Dog &operator=(const Dog& object);

    ~Dog();
	
    void makeSound() const ;
    std::string *getideas();
    void setideas(std::string idea);

};

#endif