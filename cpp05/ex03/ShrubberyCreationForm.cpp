/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:04:52 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/21 16:41:12 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target,145,137)
{
    std::string outputFilename = target + "_shrubbery";
    std::ofstream outputFile;
    outputFile.open(outputFilename.c_str());
    if(!outputFile.is_open())
    {
        std::cerr << "Error: Unable to create output file " << outputFilename << std::endl;
    }
    else
    {
        outputFile << "                 # #### ####			" << std::endl;
        outputFile << "               ### \\/#|### |/####		" << std::endl;
        outputFile << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        outputFile << "            ###  \\/###|/ \\/ # ###	" << std::endl;
        outputFile << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        outputFile << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        outputFile << "          __#_--###`  |{,###---###-~	" << std::endl;
        outputFile << "                    \\ }{				" << std::endl;
        outputFile << "                     }}{				" << std::endl;
        outputFile << "                     }}{				" << std::endl;
        outputFile << "                     {{}				" << std::endl;
        outputFile << "               , -=-~{ .-^- _			" << std::endl;
        outputFile << "                     `}				" << std::endl;
        outputFile << "                      {				" << std::endl;
        outputFile.close();
        std::cout << target << " tree has been created \n";
    } 
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& object) : AForm(object)
{
    std::string outputFilename = object.name + "_shrubbery";
    std::ofstream outputFile;
    outputFile.open(outputFilename.c_str());
    if(!outputFile.is_open())
    {
        std::cerr << "Error: Unable to create output file " << outputFilename << std::endl;
    }
    else
    {
        outputFile << "                 # #### ####			" << std::endl;
        outputFile << "               ### \\/#|### |/####		" << std::endl;
        outputFile << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        outputFile << "            ###  \\/###|/ \\/ # ###	" << std::endl;
        outputFile << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        outputFile << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        outputFile << "          __#_--###`  |{,###---###-~	" << std::endl;
        outputFile << "                    \\ }{				" << std::endl;
        outputFile << "                     }}{				" << std::endl;
        outputFile << "                     }}{				" << std::endl;
        outputFile << "                     {{}				" << std::endl;
        outputFile << "               , -=-~{ .-^- _			" << std::endl;
        outputFile << "                     `}				" << std::endl;
        outputFile << "                      {				" << std::endl;
		outputFile.close();
        std::cout << object.name << " tree has been created \n";
    } 
    
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& object)
{
    this->sing = object.sing;
    return(*this);
}
class  ShrubberyCreationForm::GradeTooLowException : public std::exception{
    public:
    virtual const char *what() const throw()
    {
         return "Grade is too low";
    }
};
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
    if(executor.getGrade() > this->geteGrade())
        throw ShrubberyCreationForm::GradeTooLowException();
    else 
        std::cout << this->name <<" execute the form successfully \n ";
}
