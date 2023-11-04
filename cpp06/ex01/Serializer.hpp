/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:29:41 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/04 16:38:48 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct Data{
    int i;
};

class Serializer
{
    private:
        Serializer();
        ~Serializer();
    public:
        Serializer(const Serializer& object);
        Serializer &operator=(const Serializer& object);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};




#endif