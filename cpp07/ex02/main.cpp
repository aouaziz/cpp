/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:54:39 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/08 16:01:31 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<char> n1(10);
    for(size_t i  = 0; i < n1.size();i++)
        n1[i] = '0';
    for(size_t i  = 0; i < n1.size();i++)
        std::cout << n1[i] ;
    std::cout << '\n';
    
    try
    {
        std::cout << "Accessing a valid index: " << n1[n1.size() - 1] << '\n';
        std::cout << "Accessing a invalid index: " << n1[n1.size()] << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return(0);
}