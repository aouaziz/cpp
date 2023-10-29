/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:29:41 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/27 17:39:53 by aouaziz          ###   ########.fr       */
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
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& object);
        Serializer &operator=(const Serializer& object);
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};




#endif