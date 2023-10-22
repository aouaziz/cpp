/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:16:52 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/22 18:58:05 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

class Intern::Internfailed : public std::exception{
	public:
	virtual const char *what() const throw()
    {
         return "Intern failed ";
    }
	
};
Intern::Intern()
{
}
Intern::Intern(const Intern& object)
{
    *this = object;
}
Intern &Intern::operator=(const Intern& object)
{
    (void)object;
    return(*this);
}
Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string name,std::string target)
{
    AForm *arr = NULL;
    std::string Name[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i = 0;
    while (i < 3 && Name[i] != name)
        i++;
    switch (i)
    {
    case 0:
        arr = new ShrubberyCreationForm(target);
        break;
    case 1:
        arr = new RobotomyRequestForm(target);
        break;
    case 2:
        arr = new PresidentialPardonForm(target);
        break;
    default:
        throw Internfailed();
    }
    std::cout << " Intern creates " << *arr << '\n';
    return(arr);    
}