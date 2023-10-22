/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:58:10 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/21 17:15:01 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
   try
   {
        Bureaucrat bureaucrat("bureaucrat", 5);
        PresidentialPardonForm P("PresidentialPardonForm");
        RobotomyRequestForm R("RobotomyRequestForm");
        ShrubberyCreationForm S("ShrubberyCreationForm");
        std::cout << "\n--------------- ( execute ) ---------------" << std::endl;
        P.execute(bureaucrat);
        R.execute(bureaucrat);
        S.execute(bureaucrat);
        std::cout << "\n--------------- ( executeForm ) ---------------" << std::endl;
        bureaucrat.executeForm(P);
        bureaucrat.executeForm(R);
        bureaucrat.executeForm(S);
        std::cout << "\n--------------- ( End ) ---------------" << std::endl;
   }
   catch(const std::exception& e)
   {
    std::cerr << e.what() << '\n';
   }
   
}
