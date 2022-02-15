#include <iostream>
#include "Algorithms.h"
#include <vector>


int main()
{
    const int ciSize = 10;

    int arr[ciSize] = { 4, 5, 2, 7, -12, 4, 98, 546, -90, 3 };

   
    std::cout << "Before sort:\n";
    for (const auto& val : arr)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    ShellSort<int>(arr, ciSize);

    std::cout << "After sort:\n";
    for (const auto& val : arr)
    {
        std::cout << val << " ";
    }
    


}