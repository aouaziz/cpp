#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other)
{
    *this=other;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
    this->data = other.data;
    return (*this);
}

double BitcoinExchange::getExchangeRate(std::string currency)
{
    return (this->data[currency]);
}

void BitcoinExchange::setExchangeRate(std::string currency, double rate)
{
    this->data[currency] = rate;
}


double BitcoinExchange::getExchangeRate(std::string currency)
{
    return (this->data[currency]);
}

void BitcoinExchange::loadDatabase(const std::string& filename)
{
    std::ifstream file(filename);
    std::string line;
    if(!file.is_open())
    {
        std::cerr << "Error: could not open file" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::getline(file, line);
    
    while (std::getline(file, line))
    {
        processInputFile(line);
    }
}

void processInputFile(const std::string& line)
{
    
}