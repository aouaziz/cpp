/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:17 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/10 15:12:06 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal{
    private:
     Brain* brain;
    public:
    WrongCat();
    WrongCat(std::string name);
    
    WrongCat(const WrongCat& object);
    WrongCat &operator=(const WrongCat& object);
    
    ~WrongCat();

	void makeSound() const ;
};

#endif