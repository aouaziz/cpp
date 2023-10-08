/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:17 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/08 14:56:42 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal{
    private:
     Brain* ideas;
    public:
    WrongCat();
    WrongCat(std::string name);
	void makeSound() const ;
    Brain *getBrain( void ) const;
    ~WrongCat();
};

#endif