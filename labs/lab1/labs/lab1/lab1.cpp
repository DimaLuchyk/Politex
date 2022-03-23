#include <iostream>
#include <chrono>
#include <vector>

#include <ctime>
#include <cstdlib>

#include "Algorithms.h"

#define SIZE 100000

void ShowVector(const std::vector<int>& cVec)
{
	for(const auto& el : cVec)
	{
		std::cout << el << " ";
	}
	std::cout << std::endl;
}

void FillArr(int* arr, const size_t ciSize)
{
    for (int i = 0; i < ciSize; i++)
    {
        arr[i] = (rand() % 100) + 1;
    }
}

void ShowStats(std::string sSortName, std::chrono::microseconds time)
{
    std::cout << sSortName << std::endl;
    std::cout << "size of array = " << SIZE << std::endl;
    std::cout << "DURATION = " << time.count() << " microseconds\n";
}

int main()
{
    srand(time(0));

    //Arrays for testing
    std::vector<int> vec1, vec2;
    vec1.resize(SIZE);
    FillArr(vec1.data(), vec1.size());
    vec2 = vec1;


    //SelectionSort
    //std::cout << "vec1 before sorting: \n";
    //ShowVector(vec1);

    auto start = std::chrono::high_resolution_clock::now();
    Lab1Algs::SelectionSort(vec1.data(), SIZE);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    //std::cout << "vec1 after sorting: \n";
    //ShowVector(vec1);

    ShowStats("SelectionSort", duration);

    std::cout << "\n===================================================================\n\n";

    //ShellSort
    
    //std::cout << "vec2 before sorting:\n";
    //ShowVector(vec2);

    start = std::chrono::high_resolution_clock::now();
    Lab1Algs::ShellSort(vec2.data(), SIZE);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    //std::cout << "vec2 after sorting: \n";
    //ShowVector(vec2);
    
    ShowStats("ShellSort", duration);



}
