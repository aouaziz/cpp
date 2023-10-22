/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:58:10 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/18 18:08:38 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        //Bureaucrat c("ayoub",-15);
        Bureaucrat a("ayoub",2);
        Bureaucrat b("ouaziz",149);
        a.incrementGrade();
       // a.incrementGrade();
        b.decrementGrade();
       // b.decrementGrade();
        std::cout <<"Bureaucrat a : " << a << " Bureaucrat b : " << b << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
