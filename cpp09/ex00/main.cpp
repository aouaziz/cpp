#include "BitcoinExchange.hpp"


void  BitcoinExchange::CheckData(std::string Data,float value)
{
    if(value < 0 )
    {
       std::cerr <<"Error: not a positive number.\n";
       return;
    }
    else if(value > 1000)
    {
       std::cerr <<"Error: too large a number.\n";
       return;
    }    
    float final = CheckMap(Data);
    std::cout << Data << " => " << final << "\n";
    if(final)
        printData(Data,value,final);
}

void BitcoinExchange::processInputFile(const std::string& filename)
{
    std::fstream file(filename.c_str());
    if(!file.is_open())
        throw std::runtime_error("Error: Failed to open input file");
    std::string Data;
    std::string line;
    float value;
    std::getline(file,line);
    CheckPipE(line);
    while (std::getline(file,line))
    {
        CheckPipe(line);
        Data = line.substr(0,10);
        std::stringstream convert;
        convert << line.substr(13);
        convert >> value;
        CheckData(Data,value);
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
    
}