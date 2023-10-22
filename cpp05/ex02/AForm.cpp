/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:50:56 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/19 16:49:09 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


class  AForm::GradeTooHighException : public std::exception{
    public:
    virtual const char *what() const throw()
    {
         return "Grade is too high";
    }
};

class  AForm::GradeTooLowException : public std::exception{
    public:
    virtual const char *what() const throw()
    {
         return "Grade is too low";
    }
};
void AForm::setSigned(bool Sign) 
{
    this->sing = Sign;
}
AForm::AForm(const std::string Name , const int Sing, const int Execute):name(Name) , sing_grade(Sing) ,execute_grade(Execute)
{
    if (sing_grade < 1 || execute_grade < 1)
		throw GradeTooHighException();
	if (sing_grade > 150 || execute_grade > 150)
		throw GradeTooLowException();
    sing= false;
}

AForm::AForm(const AForm& object):name(object.name) , sing_grade(object.sing_grade) ,execute_grade(object.execute_grade)
{
    *this = object;
}

AForm &AForm::operator=(const AForm& object)
{
    sing = object.sing;
    return(*this);
}

std::string AForm::getName() const {
    return name;
}

int AForm::getsGrade() const {
    return sing_grade;
}

int AForm::geteGrade() const {
    return execute_grade;
}

bool AForm::getSigned() 
{
    return sing;
}

std::ostream&   operator<<( std::ostream& CIN, const AForm& object )
{
    CIN << object.getName() <<", AForm execute grade is " << object.geteGrade() << " and sing grade is " << object.getsGrade(); 
    return(CIN);
}
void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if(bureaucrat.getGrade() > this->sing_grade )
        throw AForm::GradeTooLowException();
    sing = true;
}
AForm::~AForm()
{
}