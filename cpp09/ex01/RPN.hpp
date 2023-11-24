#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
private:
    std::stack<float>data;
public:
    RPN();
    RPN(const RPN& object);
    RPN &operator=(const RPN& object);
    ~RPN();
    void processInput(std::string input);
    void start(std::string input);
    void calculate(char c);
};





#endif