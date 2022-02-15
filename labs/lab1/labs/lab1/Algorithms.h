#pragma once

namespace Lab1Algs
{
    template<typename T>
    void SelectionSort(T* arr, const size_t ciSize)
    {
        T temp;

        for (int i = 0; i < ciSize; i++)
        {
            int iMinIndex = i;

            for (int j = i + 1; j < ciSize; j++)
            {
                iMinIndex = (arr[j] < arr[iMinIndex]) ? j : iMinIndex;
            }

            if (i != iMinIndex)
            {
                temp = arr[i];
                arr[i] = arr[iMinIndex];
                arr[iMinIndex] = temp;
            }

        }
    }

    template<typename T>
    void ShellSort(T* arr, const size_t ciSize)
    {
        int i = 0, j = 0, step = 0;
        T tmp;

        for (step = ciSize / 2; step > 0; step /= 2)
        {
            for (i = step; i < ciSize; i++)
            {
                tmp = arr[i];
                for (j = i; j >= step; j -= step)
                {
                    if (tmp < arr[j - step])
                    {
                        arr[j] = arr[j - step];
                    }
                    else
                    {
                        break;
                    }
                }
                arr[j] = tmp;
            }
        }
    }
}