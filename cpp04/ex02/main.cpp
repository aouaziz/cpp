/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:44:07 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/14 15:18:31 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main2()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    
    const AAnimal* animales[4] = {new Cat(),new Dog(),new Cat("mimi"), new Dog("jims")};
    for(int i =0; i< 4;i++)
    {
        animales[i]->getType();
        animales[i]->makeSound();
        delete animales[i];
        
    }
    
    std::cout << "\n--------------- testing deep copy  ---------------" << std::endl;
    const AAnimal *dog1 = new Dog("Dog1");
    const AAnimal *dog2 = new Dog(*(Dog *) dog1);
    std::cout << "\ndog 1  type : " << dog1->getType() ;
    std::cout <<" dog 1 sound : " ;
    dog1->makeSound();
    std::cout << "\ndog 2  type : " << dog2->getType() ;
    std::cout <<" dog 2 sound : " ;
    dog2->makeSound();
    ((Dog *)dog1)->setideas("copy");
    std::string *str1 = ((Dog *)dog1)->getideas();
    std::string *str2 = ((Dog *)dog2)->getideas();
    std::cout << "\n dog1 ideas : " << str1[1]<< std::endl;
    std::cout << "\n dog2 ideas : " << str2[1]<< std::endl;
    *(Dog *)dog2 = *(Dog *)dog1; 
     std::string *str3 = ((Dog *)dog2)->getideas();
    std::cout << "\n dog2 ideas : " << str3[1]<< std::endl;
    delete dog1;
    delete dog2;
    return(0);
}

int main()
{
    main2();
    //system("leaks AAnimal");
    return(0);
}