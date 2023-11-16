/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:58:34 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/16 16:52:02 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <list> 
#include <iostream>

template< typename T > 
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        MutantStack() : std::stack<T>(){};
        MutantStack(const MutantStack &object):std::stack<T>(object){};
        MutantStack &operator=(const MutantStack &object)
        {
            this->c = object.c;
            return(*this);
        }
        iterator begin(){return(this->c.begin());};
        iterator end(){return(this->c.end());};
        const_iterator begin()const{return(this->c.begin());};
        const_iterator end()const{return(this->c.end());};
        virtual ~MutantStack(){};
};




#endif