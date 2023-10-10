/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:44:07 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/10 15:52:49 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <stdlib.h>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    const Animal* animales[4] = {new Cat(),new Dog(),new Cat("mimi"), new Dog("jims")};
    animales[1]->makeSound(); 
    animales[2]->makeSound(); 
    std::cout << "\n--------------- copy of a Dog and a Cat ---------------" << std::endl;
    animales[0] = animales[2];
    animales[1] = animales[3];
    std::cout << animales[0]->getType() << '\n';
    std::cout << animales[1]->getType() << '\n';
   // system("leaks Animal");
    return 0;
}