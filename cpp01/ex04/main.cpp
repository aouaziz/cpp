/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:59:42 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/17 23:57:00 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SRfile.hpp"

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string strs = std::string(av[2]);
    std::string strr = std::string(av[3]);
    if(strs == "")
    {
        std::cout << "invalid arguments\n";
        return(1);
    }
    if(open_files(av[1],strs,strr))
        return(1);
    return(0);
}