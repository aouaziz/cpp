/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:50:56 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/21 17:11:09 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


class  Form::GradeTooHighException : public std::exception{
    public:
    virtual const char *what() const throw()
    {
         return "Grade is too high";
    }
};

class  Form::GradeTooLowException : public std::exception{
    public:
    virtual const char *what() const throw()
    {
         return "Grade is too low";
    }
};

Form::Form(const std::string Name , const int Sing, const int Execute):name(Name) , sing_grade(Sing) ,execute_grade(Execute)
{
    if (sing_grade < 1 || execute_grade < 1)
		throw GradeTooHighException();
	if (sing_grade > 150 || execute_grade > 150)
		throw GradeTooLowException();
    sing= false;
}

Form::Form(const Form& object):name(object.name) , sing_grade(object.sing_grade) ,execute_grade(object.execute_grade)
{
    *this = object;
}

Form &Form::operator=(const Form& object)
{
    sing = object.sing;
    return(*this);
}

std::string Form::getName() const {
    return name;
}

int Form::getsGrade() const {
    return sing_grade;
}

int Form::geteGrade() const {
    return execute_grade;
}

bool Form::getSigned() 
{
    return sing;
}

std::ostream&   operator<<( std::ostream& CIN, const Form& object )
{
    CIN << object.getName() <<", Form execute grade is " << object.geteGrade() << " and sing grade is " << object.getsGrade(); 
    return(CIN);
}
void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if(bureaucrat.getGrade() > this->sing_grade )
        throw Form::GradeTooLowException();
    sing = true;
}
Form::~Form()
{
}