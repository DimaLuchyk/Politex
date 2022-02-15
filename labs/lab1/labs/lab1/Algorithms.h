#pragma once

template<typename T>
void SelectionSort(T* arr, const size_t ciSize)
{
    int iTemp = 0;

    for (int i = 0; i < ciSize; i++)
    {
        int iMin = i;

        for (int j = i + 1; j < ciSize; j++)
        {
            iMin = (arr[j] < arr[iMin]) ? j : iMin;
        }

        if (i != iMin)
        {
            iTemp = arr[i];
            arr[i] = arr[iMin];
            arr[iMin] = iTemp;
        }

    }
}