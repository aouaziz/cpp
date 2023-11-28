#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <sstream>
#include <map>
#include <fstream>
#include <string>


class BitcoinExchange
{
    private:
        std::map<std::string, float> data;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &other);
        BitcoinExchange &operator=(BitcoinExchange const &other);
        void start(void);
        void processInputFile(std::string filename);
        void CheckPipE(std::string line);
        bool CheckPipe(std::string line);
        bool CheckData(float value);
        void printData(std::string Data,float input_value , float Data_value);
        bool isValidValue( std::string value) ;
        void findClosestData(std::string Data,float input_value);
        bool CheckDataValidation(std::string Data);
};


#endif