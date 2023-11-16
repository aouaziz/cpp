/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:29:04 by aouaziz           #+#    #+#             */
/*   Updated: 2023/11/16 14:57:27 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main() {
    try {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    Span spe(0);
    //std::cout << spe.shortestSpan() << std::endl;
    std::cout << spe.longestSpan() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}