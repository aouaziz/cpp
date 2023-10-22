/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:59:37 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/18 17:39:56 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
        class GradeTooHighException;
        class GradeTooLowException;
        void incrementGrade();
        void decrementGrade();
};

std::ostream&   operator<<( std::ostream& CIN, const Bureaucrat& object );

#endif
