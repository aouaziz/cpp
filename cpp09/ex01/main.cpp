#include "RPN.hpp"
    
void RPN::calculate(char c) {
    if (data.size() < 2) {
        throw std::invalid_argument("Insufficient operands for operation");
    }
    float operand2 = data.top();
    data.pop();
    float operand1 = data.top();
    data.pop();

    switch (c) {
    case '/':
        if (operand2 == 0 && operand1 != 0) 
            throw std::invalid_argument("Division by zero");
         else if (operand2 == 0 && operand1 == 0) 
            throw std::invalid_argument("Indeterminate form 0/0");
        else if(operand2 != 0 && operand1 == 0) 
            data.push(0);
        else 
            data.push(operand1 / operand2);
        break;
    case '*':
        data.push(operand1 * operand2);
        break;
    case '+':
        data.push(operand1 + operand2);
        break;
    case '-':
        data.push(operand1 - operand2);
        break;
    default:
        throw std::invalid_argument("Invalid operator");
    }
}

void RPN::start(std::string input)
{
    char c;
    for (size_t i = 0; i < input.length();i++)
    {
        c = input[i];
        if ( std::isdigit( c ) ) 
            data.push(c - 48);
        else if (!std::isspace(c)) 
            calculate(c);
            
    }
    if (data.size() !=1 )
        throw std::invalid_argument( "Error." );
    else 
        std::cout << data.top() << "\n";
}
int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "Usage: ./RPN \" mathematical expression \"" << std::endl;
        return (1);
    }
    try
    {
        RPN object;
        object.processInput(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return(0);
}
