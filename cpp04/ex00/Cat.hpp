/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:55 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/14 13:10:09 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat:public Animal{
    public:
    Cat();
    Cat(std::string name);
    
    Cat(const Cat& object);
    Cat &operator=(const Cat& object);
	
    ~Cat();
    
    void makeSound() const ;
};

#endif