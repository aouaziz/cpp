/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:43:55 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/10 14:54:44 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal{
    private:
    Brain *brain;
    public:
    Cat();
    Cat(std::string name);
    
    Cat(const Cat& object);
    Cat &operator=(const Cat& object);
    
    ~Cat();
	
    void makeSound() const ;
    
};

#endif