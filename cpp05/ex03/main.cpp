/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:58:10 by aouaziz           #+#    #+#             */
/*   Updated: 2023/10/22 18:58:31 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

int main()
{
   try{
      Intern  someRandomIntern;
      AForm*   rrf;
      rrf = someRandomIntern.makeForm("robotomy request", "Bender") ;
      // rrf = someRandomIntern.makeForm("presidential pardon", "Bender") ;
      // rrf = someRandomIntern.makeForm("shrubbery creation", "Bender") ;
      // rrf = someRandomIntern.makeForm("", "Bender") ;
   }
   catch(std::exception &e)
   {
       std::cerr << e.what() << '\n';
   }
}
