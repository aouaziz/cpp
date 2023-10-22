/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:21:06 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/14 15:14:48 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        
        Brain(const Brain& object);
        Brain &operator=(const Brain& object);
        
        std::string *getideas();
        void setideas(std::string idea);
        
        ~Brain();
};



#endif