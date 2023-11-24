#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
    data.clear();
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
        throw std::out_of_range("Error: Invalid format in the first line of the input file. Expected data format is 'YYYY-MM-DD | value'.");
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
    std::cout << "Error: No match found for Data: " << Data << "\n";
    return 0;
}
void BitcoinExchange::CheckPipE(std::string line)
{
    bool i = false;
    if(line.empty())
        throw std::out_of_range("Error: Invalid format in the first line of the input file. Expected data format is 'YYYY-MM-DD | value'.");
    size_t dx  = line.find("|");
    if(dx == line.size() || dx <= 1 )
        i = true;
    else if( line[dx+1] != ' ' || line[dx-1] != ' ' )
        i = true;
    if(i == true)
        throw std::out_of_range("Error: Invalid format in the first line of the input file. Expected data format is 'YYYY-MM-DD | value'.");
}

bool BitcoinExchange::CheckPipe(std::string line)
{
    bool i = false;
    if(line.empty())
    {
        std::cerr<<"Error: Invalid line. \n";
        return false;
    }
    size_t dx  = line.find("|");
    if(dx == line.size() || dx <= 1 )
        i = true;
    else if( line[dx+1] != ' ' || line[dx-1] != ' ')
        i = true;
    if(i == true)
        return false;
    return true;
}

void BitcoinExchange::printData(std::string Data,float input_value , float Data_value)
{
    float r = (input_value * Data_value);
    std::cout << Data <<" => " << input_value << " = " << r << std::endl;
}
bool BitcoinExchange::isValidValue(std::string value) {
    std::stringstream convert(value);
    char c;
    std::string exe = "\t -+.";
    if(value[0] == ' ' || value[0] == '\t')
    {
        std::cerr << "Error: Invalid value format. \n";
        return false;
    }
    while (convert.get(c)) {
        if (!exe.find(c) && c != '.'&& !std::isdigit(c)) {
            std::cerr << "Error: Non-numeric character found in value. \n";
            return false; 
        }
    }

    return true;
}
