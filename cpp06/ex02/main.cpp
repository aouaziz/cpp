/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:00:00 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/29 04:42:01 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
    int i ;
    i = rand() % 3 ;
    if(i == 0)
        return(new C);
    else if(i == 1)
        return(new B);
    else 
        return(new A);
}

void identify(Base* p)
{
    if(dynamic_cast< A* >(p))
        std::cout << "the actual type of the object pointed to by p as *: A \n";
    else if(dynamic_cast< B* >(p))
        std::cout << "the actual type of the object pointed to by p as *: B \n";
    else if(dynamic_cast< C* >(p))
        std::cout << "the actual type of the object pointed to by p as *: C \n";
    else 
        std::cout << "the actual type of the object pointed to by p as *: unknown \n";
}

void identify(Base& p)
{
    try{
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "the actual type of the object pointed to by p as &: A \n";
    }
    catch(std::exception &e){}
    try{
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "the actual type of the object pointed to by p as &: B \n";
    }
    catch(std::exception &e){}
     try{
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "the actual type of the object pointed to by p as &: C \n";
    }
    catch(std::exception &e){}
}
int main()
{
    Base *test = new Base();
    Base *test1 = generate();
    Base *test2 = generate();
    Base *test3 = generate();
    Base *test4 = generate();
    Base *test5 = generate();
    Base *test6 = generate();
    Base *test7 = generate();
    Base *test8 = generate();
    
    identify(*test);
    identify(test1);
    identify(*test2);
    identify(test3);
    identify(*test4);
    identify(test5);
    identify(*test6);
    identify(test7);
    identify(*test8);
    delete test1;
    delete test;
    delete test2;
    delete test3;
    delete test4;
    delete test5;
    delete test6;
    delete test7;
    delete test8;
    return(0);
}