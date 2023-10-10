/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:42:55 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/10 16:17:51 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class AAnimal
{
    protected:
        std::string type;
    public:
    AAnimal();
    AAnimal(std::string Type);
    AAnimal(const AAnimal& AAnimal);
    AAnimal &operator=(const AAnimal& AAnimal);
    std::string getType(void) const;
    virtual ~AAnimal();
    virtual void makeSound() const = 0 ;
};


#endif
