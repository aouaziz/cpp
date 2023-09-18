/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:07:19 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/07 16:42:02 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char **av)
{
   std::string input;
   
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return(0);
    }
    
    for(int i = 1 ; i < ac;i++)
    {
        input = av[i];
        for(int j = 0; input[j];j++)
        {
            if(std::islower(input[j]))
              input[j] = std::toupper(input[j]);
        }
        std::cout << input;
    }
    return(0);
}