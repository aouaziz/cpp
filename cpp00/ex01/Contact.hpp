/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:19:15 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/22 18:34:27 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    public:

    void setFirstName(std::string FirstName);
    void setLastName(std::string LastName); 
    void setNickname( std::string Nickname) ;
    void setphoneNumber( std::string phone) ;
    void setdarkestSecret( std::string DarkestSecret);
    std::string getFirstName() ;
    std::string getLastName() ;
    std::string getNickname();
    std::string getphoneNumber();
    std::string getdarkestSecret();

};
#endif