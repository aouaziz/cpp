/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:31:53 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/27 17:50:21 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data *d = new Data;
    Data *d2 =  NULL;
    Serializer S;
    uintptr_t u;
    
    u = S.serialize(d);
    d2 = S.deserialize(u);
    std::cout <<" uintptr_t       : "<< u << std::endl; 
    std::cout <<" Data       : "<< d2 << std::endl; 
    delete d;
    return(0);
}