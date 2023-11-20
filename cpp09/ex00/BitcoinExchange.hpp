#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <map>
#include <fstream>


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
        void processInputFile(const std::string& filename);
        void CheckPipE(std::string line);
        void CheckPipe(std::string line);
        void CheckData(std::string Data,float value);
        void printData(std::string Data,float input_value , float Data_value);
        float CheckMap(std::string Data);
};


#endif