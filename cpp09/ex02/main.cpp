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
  for (size_t f = l; f <= r; f++)
  {
    d[f] = arr[f];
  }
  
}

void PmergeMe::MergeSortRecursion(std::deque<int>& d,int l,int r){
  if(l >= r)
    return;
  int m = (l+r)/2;
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

void PmergeMe::start(std::vector<int> s){
    LoadingInfo(s);
    displaySequence("Before:",s);
    MergeSort(this->vect);
    MergeSort(this->dequ);
}

int main(int ac , char **av)
{
    PmergeMe object;
    std::vector<int> start;
    if(ac < 2)
    {
        std::cerr << "Usage: ./PmergeMe positive integer sequence "<< std::endl;
        return (1);
    }

    for (size_t i = 0; i < ac; i++)
    {
      try
      {
        int num = std::stoi(av[i]);
        if(num <0){
           std::cerr << "Error: Negative integers are not allowed.\n";
            return 1;
        }
        start.push_back(num);
      }
      catch(const std::exception& e)
      {
        std::cerr << e.what() << '\n';
      }
    }
    object.start(start);
}