/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:21:06 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/08 15:33:57 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIM_HPP

#include "Animal.hpp"

class Brain{
    private:
        std::string *ideas;
    public:
        Brain();
        Brain(Brain& object);
        Brain &operator=(const Brain& object);
        ~Brain();
        std::string *getideas();
        void setideas(std::string idea)

};



#endif