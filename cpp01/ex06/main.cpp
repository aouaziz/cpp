/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:25:52 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/15 15:07:54 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char *av[])
{
    Harl harl;
    if(ac != 2)
    {
        std::cout<< "wrong number of arguments\n";
        return(1);        
    }
    harl.complain(av[1]);
    return(0);
}