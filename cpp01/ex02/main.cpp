/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:32:45 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/11 16:59:39 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
    std::string String = "HI THIS IS BRAIN";
   
    std::string *stringPTR = &String;
   
    std::string& stringREF = String;

    std::cout << "• The memory address of the string variable is : [" << &String << "]\n";
    std::cout << "• The memory address held by stringPTR is :      [" << stringPTR <<"]\n";
    std::cout << "• The memory address held by stringREF is :      [" << &stringREF <<"]\n";
    
    std::cout<<"\n-------------------------------------------------------------------\n\n";

    std::cout << "• The value of the string variable is  : " << String << std::endl;
    std::cout << "• The value pointed to by stringPTR is : " << *stringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF is : " << stringREF << std::endl;
}