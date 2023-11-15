/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:38:34 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/15 16:27:27 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>

int easyfind(T& v, int i)
{
    typename T::iterator it = v.begin();
    
        while(it < v.end() && *it != i )
            it++;
        if(it == v.end())  
            throw std::out_of_range("out of range");
        return(*it);
}

#endif