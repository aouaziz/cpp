/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:02:01 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/21 16:41:20 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target,72,45)
{
    std::srand( time(0) );
    std::cout << target << " Makes some drilling noises \n";
    if( rand() % 2 == 0)
        std::cout << target << " has been robotomized successfully \n";
    else 
        std::cout << target << " failed to robotomized \n";
        
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& object) : AForm(object)
{
    std::srand( time(0) );
    std::cout << object.name << " Makes some drilling noises \n";
    if( rand() % 2 == 0)
        std::cout <<  object.name  << " has been robotomized successfully \n";
    else 
        std::cout <<  object.name  << " failed to robotomized \n";
        
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& object)
{
    this->sing = object.sing;
    return(*this);
}
class  RobotomyRequestForm::GradeTooLowException : public std::exception{
    public:
    virtual const char *what() const throw()
    {
         return "Grade is too low";
    }
};
void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    if(executor.getGrade() > this->geteGrade())
        throw RobotomyRequestForm::GradeTooLowException();
    else 
        std::cout << this->name <<" execute the form successfully \n ";
}