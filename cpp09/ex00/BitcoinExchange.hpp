#ifned BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
    private:
        std::map<std::string, double> data;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &other);
        BitcoinExchange &operator=(BitcoinExchange const &other);
        double getExchangeRate(std::string currency);
        void setExchangeRate(std::string currency, double rate);
        void loadDatabase(const std::string& filename);
        void processInputFile(const std::string& filename);

};


#endif