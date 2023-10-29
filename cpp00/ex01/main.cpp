/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:31:10 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/22 23:36:23 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void welcome()
{
    std::cout << "Welcome to Phone service! Creates an empty phone book for up to 8 contacts\n" ;

}
void commands()
{
    std::cout << "ADD: Use this command to add a new contact to your phonebook.\n";
    std::cout << "SEARCH: This command allows you to search for and display a specific contact.\n";
    std::cout << "EXIT: To exit the phone service, simply use this command.\n";
}

int main()
{ 
    PhoneBook book;
    
    std::string command;
    welcome();
    book.setindex(0);
    book.setoverflow(0);
    while(!std::cin.eof())
    {
        // if (std::cin.eof())
        //     return(1);
        std::cout << "Enter a command > ";
        std::getline(std::cin,command);
        if(command == "ADD")
            book.Add_Contact();
        else if(command == "SEARCH")
            book.Search_Contact();
        else if(command == "EXIT")
            break;
        else if(command !="")
            commands();
    }
    return(0);

}
