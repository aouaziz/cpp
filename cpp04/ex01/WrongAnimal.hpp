/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:46 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/10 15:21:08 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class WrongAnimal
{
    protected:
        std::string type;
    public:
    WrongAnimal();
    WrongAnimal(std::string Type);
    WrongAnimal(const WrongAnimal& animal);
    WrongAnimal &operator=(const WrongAnimal& animal);
    virtual ~WrongAnimal();
    std::string getType(void) const;
    void makeSound() const ;
};

#endif