#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

#include <sys/time.h>
#include <sstream> 



class PmergeMe
{
private:
    std::vector<int> vect;
    std::deque<int> dequ;
    struct timeval ST, ET;
    long S, MS;
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
    void MergeSortRecursion(std::vector<int>& v,int l,int r);
    void MergeSorted(std::vector<int>& v,int l,int m,int r);
    void MergeSort(std::vector<int>& v);
    void MergeSortRecursion(std::deque<int>& d,int l,int r);
    void MergeSorted(std::deque<int>& d,int l,int m,int r);
    void MergeSort(std::deque<int>& d);
};




#endif