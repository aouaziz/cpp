/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:29:53 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/08 16:13:54 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


long unsigned int countSpice(std::string data)
{
	long unsigned int i;
    i = 0;
    
	while( i < data.size())
    {
        if(data[i] != ' ' && data[i] != '\t')
            break;
        i++;
    }
    return(i);
}

int IsNamber(std::string data)
{
    
    for(long unsigned int i = 0; i < data.size() ; i++)
    {
        if(data[i] < '0' || data[i] > '9')
		{
			return(0);
		}
	}
    return(1);
}

void PhoneBook::setindex(int i)
{
    index = i;
}

int PhoneBook::getindex()
{
    return (index);
}

void PhoneBook::setoverflow(int i)
{
    overflow = i;
}

int PhoneBook::getoverflow()
{
    return (overflow);
}

void PhoneBook::SetFname()
{
    std::string data;
    
    data = "";
    while (!std::cin.eof() && data == "")
    {
        if (std::cin.eof())
            return;
        std::cout << "Enter a First Name >" ;
        std::getline(std::cin,data);
        if((data.size() == countSpice(data)))
            data = "";
        else if(data != "")
            this->contact[this->index].setFirstName(data);
    }
}
void PhoneBook::SetLname()
{
    std::string data;
    
    data = "";
    while (!std::cin.eof() && data == "")
    {
        if (std::cin.eof())
            return;
        std::cout << "Enter " <<  this->contact[this->index].getFirstName() <<" Last Name >";
        std::getline(std::cin,data);
        if((data.size() == countSpice(data)))
            data = "";
        else if(data != "")
           this->contact[this->index].setLastName(data);
    }
}
void PhoneBook::SetNname()
{
    std::string data;
    
    data = "";
    while (!std::cin.eof() && data == "")
    {
        if (std::cin.eof())
           return;
        std::cout << "Enter " <<  this->contact[this->index].getFirstName() <<" Nick Name >";
        std::getline(std::cin,data);

        if((data.size() == countSpice(data)))
            data = "";
        else if(data != "")
            this->contact[this->index].setNickname(data);
    }
}
void PhoneBook::SetPnamber()
{
    std::string data;
    
    data = "";
    while (!std::cin.eof() && data == "")
    {
        if (std::cin.eof())
            return;
        std::cout << "Enter " <<  this->contact[this->index].getFirstName() <<" Phone Namber >";
        std::getline(std::cin,data);
        if((data.size() == countSpice(data)) || !IsNamber(data))
            data = "";
        else if(data != "")
            this->contact[this->index].setphoneNumber(data);
    }
}
void PhoneBook::SetDsecret()
{
	std::string data;
    
    data = "";
    while (!std::cin.eof() && data == "")
    {
        if (std::cin.eof())
            return;
        std::cout << "Enter " <<  this->contact[this->index].getFirstName() <<" Darkest Secret >";
        std::getline(std::cin,data);
         if((data.size() == countSpice(data)))
            data = "";
        else if(data != "")
            this->contact[this->index].setdarkestSecret(data);
    }
}
