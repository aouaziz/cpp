/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:31:06 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/08 16:03:05 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template <typename T>

void swap(T  & T1 , T  & T2)
{
    T T3;
    T3 = T1;
    T1 = T2;
    T2 = T3;
}

template <typename T>
T const & min(T const &T1 , T const &T2)
{
    if( T2 <= T2)
        return(T2);
    return(T1);
}

template <typename T>
T const &  max(T const &T1 , T const &T2)
{
    if(T2 >= T1)
        return(T2);
    return(T1);
}
#endif