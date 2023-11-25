#include "PmergeMe.hpp"


void PmergeMe::MergeSorted(std::deque<int>& d,int l,int m,int r)
{
	int i = l;
	int j = m+1;
	int k = r;
	int arr[d.size()];
	while (i <= m && j <= r)
	{
		if (d[i] <=d[j])
		{
			arr[k] = d[i];
			k++;
			i++;
		}
		else
		{
			arr[k] = d[j];
			k++;
			j++;
		}
	}
	while ( i <= m)
	{
		arr[k] = d[i];
		i++;
		k++;
	}
	while (j <= r )
	{
		arr[k] = d[j];
		j++;
		k++;
	}
	for (int f = l; f <= r; f++)
	{
		d[f] = arr[f];
	}
	
}

void PmergeMe::MergeSortRecursion(std::deque<int>& d,int l,int r){
	if(l >= r)
		return;
	int m = l + (r-l)/2;
	MergeSortRecursion(d,l,m);
	MergeSortRecursion(d,m+1,r);
	MergeSorted(d,l,m,r);
}

void PmergeMe::MergeSort(std::deque<int>& d){
	gettimeofday(&ST,NULL);
	MergeSortRecursion(d,0,d.size()-1);
	gettimeofday(&ET,NULL);
	displayTime("deque");
}

void PmergeMe::start(){
		LoadingInfo(vect);
		displaySequence("Before:",vect);
		MergeSort(this->vect);
		MergeSort(this->dequ);
}

int main(int ac, char **av) {
	PmergeMe object;

	if (ac < 2) {
		std::cerr << "Usage: ./PmergeMe positive integer sequence " << std::endl;
		return 1;
	}
	try
	{
		for (int i = 1; i < ac; i++) {
			object.processInput(av[i]);
		}
		object.start();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}