/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SRfile.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:18:04 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/18 01:51:56 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRFILE_HPP
#define SRFILE_HPP

#include <iostream>
#include <fstream>

int open_files(const char * file , std::string search , std::string replice);
void searchAndReplace(std::string& line,std::string search,std::string replace);
#endif