#include "RPN.hpp"


RPN::RPN(){}

RPN::~RPN(){}


RPN::RPN(const RPN& object){
    *this = object;
}
RPN &RPN::operator=(const RPN& object){
    data = object.data;
    return(*this);
}


void RPN::processInput(std::string input)
{
    std::string allowedCharacters = "+-*/. ";
    char c;
    for (size_t i = 0; i < input.length();i++)
    {
        c = input[i];
        if (allowedCharacters.find(c) == std::string::npos && (c < '0' || c > '9')) {
            std::cerr << "Error: Invalid value.\n";
            return;
        }
        else if (allowedCharacters.find(c) == std::string::npos && !std::isdigit(c)) {
            std::cerr << "Error: Non-numeric character found in value.\n";
            return;
        }
    }
    
    start(input);
}