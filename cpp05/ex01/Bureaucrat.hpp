/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:59:37 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/21 17:11:09 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(const std::string& Name, int Grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& object);
        Bureaucrat &operator=(const Bureaucrat& object);
        std::string getName() const;
        int getGrade() const;
        void setGrade(int a);
        class GradeTooHighException;
        class GradeTooLowException;
        void signForm( Form& Form);
        void incrementGrade();
        void decrementGrade();
};

std::ostream&   operator<<( std::ostream& CIN, const Bureaucrat& object );

#endif
