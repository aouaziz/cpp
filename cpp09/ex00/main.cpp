#include "BitcoinExchange.hpp"


bool  BitcoinExchange::CheckData(float value)
{
    if(value < 0 )
    {
       std::cerr <<"Error: not a positive number.\n";
       return false;
    }
    else if(value > 1000)
    {
       std::cerr <<"Error: too large a number.\n";
       return false;
    }   
    return true; 
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
            {
                float final = CheckMap(Data);
                if(final)
                    printData(Data,value,final);
            }
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