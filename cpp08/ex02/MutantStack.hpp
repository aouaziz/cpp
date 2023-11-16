/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:58:34 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/16 15:42:52 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <list> 

template< typename T > 
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
            
        MutantStack() : std::stack<T>(){};
        iterator begin(){return(c.begin());};
        virtual ~MutantStack(){};
};




#endif