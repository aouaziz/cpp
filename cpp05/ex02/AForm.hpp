/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:51:07 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/19 16:12:07 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
    protected:
       const std::string name;
       const int sing_grade;
       const int execute_grade;
       bool     sing;
    public:
        AForm(const std::string Name , const int Sing_grade, const int Execute_grade);
        AForm(const AForm& object);
        AForm &operator=(const AForm& object);
        std::string getName() const;
        int getsGrade() const;
        int geteGrade() const;
        bool getSigned()  ;
        void setSigned(bool Sign);
        class GradeTooHighException;
        class GradeTooLowException;
        void beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
        ~AForm();
};

std::ostream&   operator<<( std::ostream& CIN, const AForm& object );

#endif