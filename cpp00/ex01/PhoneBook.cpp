/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:30:12 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/08 16:23:12 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



void PhoneBook::Add_Contact()
{    
    if(this->getindex() >= 8)
    {
        std::cout << "you passed the 8 contacts now we will replace the oldest one with the new one \n";
        this->setindex(0);
        this->setoverflow(1);
    }
	this->SetFname();
	this->SetLname();
	this->SetNname();
	this->SetPnamber();
	this->SetDsecret();
    this->setindex(this->getindex() +1);           
}

void print(int size , std::string data)
{
    std::cout << data ;
    while(size < 10)
    {
        std::cout << " ";
        size++;
    }
}

void change_size(std::string data)
{
    if(data.size() >10)
    {
        data.resize(10);
        data[9] = '.';
    }
    print (data.size(),data);
}

char ft_getIndex(int j)
{
    std::string i;
    while(!std::cin.eof())
    {
        if (std::cin.eof())
            return('9');
        std::cout << "Select an index >";
        std::getline(std::cin,i);
        if(i.size() == 1 && i[0] >= '1' && i[0]  <= j + '0')
            break;
        else if(i != "")
            std::cout << " Invalid index !!!\n";
    }
    return(i[0]);
}

void PhoneBook::Search_Contact()
{
    char index;
    int j;
    j = this->index;
    if(j == 0)
    {
        std::cout<< "PhoneBook is empty\n";
        return;
    }
    if(this->getoverflow() == 1)
        j = 8;
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    for(int i = 0; i < j; i++)
    {
        std::cout << "|"; 
        std::cout << i + 1 << "         ";  
        std::cout << "|"; 
        change_size(this->contact[i].getFirstName());
        std::cout << "|"; 
        change_size(this->contact[i].getLastName());
        std::cout << "|"; 
        change_size(this->contact[i].getNickname()); 
        std::cout << "|\n"; 
    }
    index=ft_getIndex(j);
    if(index  >= '1' && index <= '8')
    {
        std::cout << "First Name :" << this->contact[(index -'0') - 1].getFirstName() << std::endl;
        std::cout << "Last Name :" << this->contact[(index-'0') - 1].getLastName() << std::endl;
        std::cout << "Nick Name :" << this->contact[(index-'0') - 1].getNickname() << std::endl;
        std::cout << "Phone Number :" << this->contact[(index-'0') - 1].getphoneNumber() << std::endl;
        std::cout << "Darkest Secret : " << this->contact[(index-'0')- 1].getdarkestSecret() << std::endl;
    }
}

