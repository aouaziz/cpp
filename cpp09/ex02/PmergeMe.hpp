#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <unistd.h>
#include <deque>
#include <algorithm>
#include <sstream> 
#include <sys/time.h>
class PmergeMe
{
private:
    std::vector<int> vect;
    std::deque<int> dequ;
    struct timeval ST, ET;

public:
    PmergeMe();
    PmergeMe(const PmergeMe& object);
    PmergeMe &operator=(const PmergeMe& object);
    ~PmergeMe();
    void processInput(std::string input);
    void start();
    void displaySequence(const std::string& message, const std::vector<int>& s) ;
    void displayTime(std::string name);
    void LoadingInfo(std::vector<int>& s);
};




#endif