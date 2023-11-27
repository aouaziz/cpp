#include "PmergeMe.hpp"

void Merge(std::deque<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    std::deque<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void Sort(std::deque<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        Sort(arr, l, m);
        Sort(arr, m + 1, r);
        Merge(arr, l, m, r);
    }
}
void Merge(std::vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void Sort(std::vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        Sort(arr, l, m);
        Sort(arr, m + 1, r);
        Merge(arr, l, m, r);
    }
}
void PmergeMe::start(){
	LoadingInfo(vect);
	displaySequence("Before:",vect);
	gettimeofday(&ST,NULL);
	Sort(this->vect,0,vect.size()-1);
	gettimeofday(&ET,NULL);
	displaySequence("After:",vect);
	displayTime("vector");
	gettimeofday(&ST,NULL);
	Sort(this->dequ,0,dequ.size()-1);
	gettimeofday(&ET,NULL);
	displayTime("deque");
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