#include "BitcoinExchange.hpp"

bool BitcoinExchange::CheckDataValidation(std::string Data)
{
    int year, month, day;
    std::map<std::string, float> ::iterator it = data.begin();
    if (std::sscanf(Data.c_str(), "%d-%d-%d", &year, &month, &day) != 3) 
    {
        std::cerr <<"Invalid date format\n";
        return true;
    }
    else if(year < std::atoi(it->first.substr(0, 4).c_str()))
    {
         std::cerr << "Year is earlier than the earliest year in the map\n";
        return true;
    }
    else if (month < 1 || month > 12) 
    {
         std::cerr << "Month out of range\n";
        return true;
    }
    else if(month == 2 && day >29)
    {
         std::cerr << "Day out of range for the given month\n";
        return true;
    }
    else if (day < 1 || day > 31) 
    {
        std::cerr << "Day out of range for the given month\n";
        return true;
    }
    return false;
}
void BitcoinExchange::findClosestData(std::string Data,float input_value)
{
    if(CheckDataValidation(Data))
        return;
    std::map<std::string, float> ::iterator it = data.find(Data);
    if(it != data.end())
    {
        printData(Data,input_value,it->second);
        return; 
    }
    it = data.lower_bound(Data);
    if(it == data.end())
        it--;
    printData(it->first,input_value,it->second);
    return; 
    
}


void BitcoinExchange::processInputFile(std::string filename)
{
    std::fstream file(filename.c_str());
    if(!file.is_open())
        throw std::runtime_error("Error: Failed to open input file");
    std::string Data;
    std::string check;
    std::string line;
    float value;
    std::getline(file,line);
    CheckPipE(line);
    while (std::getline(file,line))
    {
        CheckPipe(line);
        if(CheckPipe(line) && line.size() >= 13)
        {
            Data = line.substr(0,10);
            std::stringstream convert;
            check = line.substr(13);
            convert << check;
            convert >> value;
            if(isValidValue(check) && CheckData(value))
                findClosestData(Data,value);
        }
        else 
        {
            std::cerr << "Error: invalid format " << line << "\n";
        }
    }
    file.close();
}

int main(int ac ,char **av)
{
    BitcoinExchange btc;
    if(ac != 2)
    {
        std::cerr << "Usage: ./btc [filename]" << std::endl;
        return (1);
    }
    (void)av;
    try
    {
        btc.start();
        btc.processInputFile(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);
}