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

void BitcoinExchange::start()
{
    std::fstream file("./data.csv");
    if(!file.is_open())
        throw std::runtime_error("Failed to open data.csv");
    std::string line;
    std::string Data;
    float value;
    while (std::getline(file,line))
    {
        Data = line.substr(0,10);
        std::stringstream convert;
        convert << line.substr(11);
        convert >> value;
        this->data.insert(std::make_pair(Data,value));
    }
    file.close();
}
float BitcoinExchange::CheckMap(std::string Data) {
    std::map<std::string, float>::const_iterator it;
    for (it = data.begin(); it != data.end(); ++it) {
        if (it->first == Data) {
            return it->second;
        }
    }
    std::cout << "No match found for Data: " << Data << "\n";
    return 0;
}
void BitcoinExchange::CheckPipE(std::string line)
{
    bool i = false;
    if(line.empty())
        throw std::out_of_range("invalid format in the first line of the input file");
    size_t dx  = line.find("|");
    if(dx == line.size() || dx <= 1 )
        i = true;
    else if( line[dx+1] != ' ' || line[dx-1] != ' ' )
        i = true;
    if(i == true)
        throw std::out_of_range("invalid format in the first line of the input file");
}

bool BitcoinExchange::CheckPipe(std::string line)
{
    bool i = false;
    if(line.empty())
    {
        std::cerr<<"Error: invalid line \n";
        return true;
    }
    size_t dx  = line.find("|");
    if(dx == line.size() || dx <= 1 )
        i = true;
    else if( line[dx+1] != ' ' || line[dx-1] != ' ' )
        i = true;
    if(i == true)
        return true;
    return false;
}

void BitcoinExchange::printData(std::string Data,float input_value , float Data_value)
{
    float r = (input_value * Data_value);
    std::cout << Data <<" => " << input_value << " = " << r << std::endl;
}
