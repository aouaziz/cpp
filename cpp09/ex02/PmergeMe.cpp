#include "PmergeMe.hpp"


PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& object)
{
		*this =object;
}
PmergeMe &PmergeMe::operator=(const PmergeMe& object){
		vect = object.vect;
		dequ = object.dequ;
		S = object.S;
		MS = object.MS;
		ET = object.ET;
		ST = object.ST;
		return *this;
}
PmergeMe::~PmergeMe(){
		vect.clear();
		dequ.clear();
}

void PmergeMe::displayTime(std::string name){
			 this->S = this->ET.tv_sec - this->ST.tv_sec;
			 this->MS = this->ET.tv_usec - this->ST.tv_usec;
		long EndTime = (S / 1000000) + (MS);
		if (name == "vector")
				std::cout << "\nTime to process a range of " << vect.size() << " elements with std::vector : " << EndTime  << " us" << "\n";
		if (name == "deque")
				std::cout << "\nTime to process a range of " << vect.size() << " elements with std::deque : " << EndTime  << " us" << "\n";
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



void PmergeMe::MergeSorted(std::vector<int>& v,int l,int m,int r)
{
	int i = l;
	int j = m+1;
	int k = r;
	int arr[v.size()];
	while (i <= m && j <= r)
	{
		if (v[i] <=v[j])
		{
			arr[k] = v[i];
			k++;
			i++;
		}
		else
		{
			arr[k] = v[j];
			k++;
			j++;
		}
	}
	while ( i <= m)
	{
		arr[k] = v[i];
		i++;
		k++;
	}
	while (j <= r )
	{
		arr[k] = v[j];
		j++;
		k++;
	}
	for (int f = l; f <= r; f++)
	{
		v[f] = arr[f];
	}
	
}

void PmergeMe::MergeSortRecursion(std::vector<int>& v,int l,int r){
	if(l >= r)
		return;
	int m = l + (r-l)/2;
	MergeSortRecursion(v,l,m);
	MergeSortRecursion(v,m+1,r);
	MergeSorted(v,l,m,r);
}

void PmergeMe::MergeSort(std::vector<int>& v){
	gettimeofday(&ST,NULL);
	MergeSortRecursion(v,0,v.size()-1);
	gettimeofday(&ET,NULL);
	displaySequence("After:",v);
	displayTime("vector");
}

void PmergeMe::processInput( std::string input) {
	int n;
	n =  std::atoi(input.c_str());
	if(std::isdigit(n) || (n == 0 && input[0] != '0') || n <0)
		throw std::invalid_argument("Invalid argument.");
    vect.push_back(n);
}
