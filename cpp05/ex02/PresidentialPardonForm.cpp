/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:01:35 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/21 16:41:31 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(target,25,5)
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& object) : AForm(object)
{
    std::cout << object.name << " has been pardoned by Zaphod Beeblebrox.\n";
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& object)
{
    this->sing = object.sing;
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
class  PresidentialPardonForm::GradeTooLowException : public std::exception{
    public:
    virtual const char *what() const throw()
    {
         return "Grade is too low";
    }
};
void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    if(executor.getGrade() > this->geteGrade())
        throw PresidentialPardonForm::GradeTooLowException();
    else 
        std::cout << this->name <<" execute the form successfully \n ";
}