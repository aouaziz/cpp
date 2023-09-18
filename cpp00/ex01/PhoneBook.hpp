/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:30:08 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/08 16:14:25 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
    Contact contact[8];
    int index;
    int  overflow;
    public:
    void Add_Contact();
    void Search_Contact();
    void setindex(int i);
    int  getindex() ;
    void setoverflow(int i);
    int  getoverflow() ;
    void SetFname() ;
    void SetLname();
    void SetNname();
    void SetPnamber();
    void SetDsecret();
};


#endif