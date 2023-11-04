/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:31:53 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/04 16:31:13 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data *d = new Data;
    Data *d2 =  NULL;
    uintptr_t u;
    
    u = Serializer::serialize(d);
    d2 = Serializer::deserialize(u);
    std::cout <<" uintptr_t       : "<< u << std::endl; 
    std::cout <<" Data       : "<< d2 << std::endl; 
    delete d;
    return(0);
}