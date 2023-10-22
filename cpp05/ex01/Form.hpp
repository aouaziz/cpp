/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:51:07 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/21 17:11:09 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
    
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
       const std::string name;
       const int sing_grade;
       const int execute_grade;
       bool     sing;
    public:
        Form(const std::string Name , const int Sing_grade, const int Execute_grade);
        Form(const Form& object);
        Form &operator=(const Form& object);
        std::string getName() const;
        int getsGrade() const;
        int geteGrade() const;
        bool getSigned()  ;
        class GradeTooHighException;
        class GradeTooLowException;
        void beSigned(const Bureaucrat& bureaucrat);
        ~Form();
};

std::ostream&   operator<<( std::ostream& CIN, const Form& object );

#endif