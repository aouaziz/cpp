/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:58:10 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/21 17:11:09 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("ayoub",55);
        //Bureaucrat a("ayoub",5);
        Form b("ouaziz",5,10);
        std::cout << "b Sing is "<<b.getSigned() << '\n';   
        a.signForm(b);
        std::cout << "b Sing is "<<b.getSigned() << '\n';
        std::cout << "\n----------------------------------------------\n";
        a.setGrade(5);
        a.signForm(b);
        std::cout << "b Sing is "<<b.getSigned() << '\n';
    }
    catch( std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   
}
