/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:03:14 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/07 16:43:29 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::setFirstName(std::string FirstName)
{
    firstName = FirstName;
}

void Contact::setLastName(std::string LastName)
{
    lastName = LastName;
}

void Contact::setNickname( std::string Nickname)
{
    nickname =Nickname;
}

void Contact::setphoneNumber( std::string phone)
{
   phoneNumber = phone;
}

void Contact::setdarkestSecret( std::string DarkestSecret)
{
    darkestSecret = DarkestSecret;
}

std::string Contact::getFirstName()
{ 
    return (firstName) ;
}
std::string Contact::getLastName()
{
    return (lastName) ;
}
std::string Contact::getNickname()
{
    return (nickname) ;
}
std::string Contact::getphoneNumber()
{
    return (phoneNumber) ;
}
std::string Contact::getdarkestSecret()
{
    return (darkestSecret) ;
}