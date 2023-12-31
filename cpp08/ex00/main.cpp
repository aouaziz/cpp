/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:38:20 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/15 16:27:12 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    try
    {
        std::vector<int> v(5);
        v.push_back(5);
        std::vector<int> v1(5,100);
        std::cout << easyfind(v,5) << std::endl;
        std::cout << easyfind(v1,5) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);
    
}