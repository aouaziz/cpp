/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SRfile.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:19:51 by aouaziz           #+#    #+#             */
/*   Updated: 2023/09/18 01:49:28 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SRfile.hpp"

void searchAndReplace(std::string& line,std::string search,std::string replace)
{
    size_t foundPos = 0;
    size_t start = 0;
    foundPos = line.find(search, start);
    while (foundPos != line.npos)
    {
        line.erase(foundPos , search.length());
        line.insert(foundPos, replace);
        start = foundPos + replace.size();
        foundPos = line.find(search, start);
    }
}



int open_files(const char * file , std::string search , std::string replice)
{
    std::string line;
    std::string outputFilename = file;
    outputFilename += ".replace";
    std::ifstream Infile;
    std::ofstream outputFile;
    
    Infile.open(file);
    outputFile.open(outputFilename.c_str());
    (void)replice;
    if(!Infile.is_open())
    {
        std::cout << "Error: Unable to open input file " << file << std::endl;
        return(1);
    }
    if(!outputFile.is_open()) {
        std::cerr << "Error: Unable to create output file " << outputFilename << std::endl;
        Infile.close();
        return(1);
    }
    while(std::getline(Infile,line))
    {	
       	searchAndReplace(line,search,replice);
        outputFile << line << std::endl;
    }
    Infile.close();
    outputFile.close();
    return(0);
}