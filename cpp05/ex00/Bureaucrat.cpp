/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:59:30 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/19 14:56:43 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class  Bureaucrat::GradeTooHighException : public std::exception{
    public:
    virtual const char *what() const throw()
    {
         return "Grade is too high";
    }
};

class  Bureaucrat::GradeTooLowException : public std::exception{
    public:
    virtual const char *what() const throw()
    {
         return "Grade is too low";
    }
};

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& object) : name(object.name)
{
    *this = object;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& object)
{
    grade = object.grade;
    return(*this);
}

Bureaucrat::~Bureaucrat() {}

 std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if (grade > 1)
        grade--;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
    if (grade < 150)
        grade++;
    else
        throw GradeTooLowException();
}

std::ostream&   operator<<( std::ostream& CIN, const Bureaucrat& object )
{
    CIN << object.getName() <<", bureaucrat grade " << object.getGrade(); 
    return(CIN);
}