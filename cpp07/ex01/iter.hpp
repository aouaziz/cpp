/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:31:06 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/07 14:57:20 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template <typename T>

void iter(T  *arr , size_t len, void(*ft)( T const &))
{
    if(arr == NULL || len <= 0)
        return;
    for(size_t i = 0 ; i < len ; i++)
        ft(arr[i]);
}
template <typename T>
void bzero( T const& c)
{
    std::cout << c;
}
#endif