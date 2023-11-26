#include "PmergeMe.hpp"


PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& object)
{
		*this =object;
}
PmergeMe &PmergeMe::operator=(const PmergeMe& object){
		vect = object.vect;
		dequ = object.dequ;
		return *this;
}
PmergeMe::~PmergeMe(){
		vect.clear();
		dequ.clear();
}

void PmergeMe::displayTime(std::string name){
	
	long micro = (ET.tv_sec - ST.tv_sec) * 1000000 + (ET.tv_usec - ST.tv_usec);
	double EndTime = micro / 1000.0;
 	if (name == "vector") {
 	  std::cout << "\nTime to process a range of " << vect.size() << " elements with std::vector : " << EndTime << " us" << "\n";
 	} else {
 	  std::cout << "\nTime to process a range of " << dequ.size() << " elements with std::deque : " << EndTime << " us" << "\n";
 	}
}
void PmergeMe::displaySequence(const std::string& message, const std::vector<int>& s) {
		std::cout << message;
		for (size_t i = 0 ; i < s.size(); i++)
		{
				std::cout << " " << s[i];
		}
		std::cout << std::endl;
}

void PmergeMe::LoadingInfo(std::vector<int>& s)
{
	for (size_t i  = 0; i < s.size(); i++)
		dequ.push_back(s[i]);
}

void PmergeMe::processInput(std::string input) {
	
	if (input.empty()) 
    	throw std::invalid_argument("Empty input.");
	for (size_t i = 0; i < input.size(); i++) {
		if (!std::isdigit(input[i])) 
    		throw std::invalid_argument("Invalid input: contains non-digit characters.");
    	else if(input[i] < '0')
			throw std::invalid_argument("Invalid input: negative number.");
	}
	int n = std::atoi(input.c_str());
	if (std::find(vect.begin(), vect.end(), n) != vect.end()) 
    	throw std::invalid_argument("Duplicate number detected.");
  vect.push_back(n);
}

