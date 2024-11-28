#include "Stack.h"
#include <windows.h> 

#include <iostream>
#include <sstream>
#include <cstdlib>

void reverse(int* nums, unsigned int length)
{
    if (nums == NULL || length == 0) {
        return;
    }

    unsigned int first = 0;
    unsigned int last = length - 1;

    while (first < last)
    {

        int temp = nums[first];
        nums[first] = nums[last];
        nums[last] = temp;

        first++;
        last--;
    }
}

int* reverse10()
{
    const int LENGTH = 10;
    int inputArray[LENGTH];

    std::cout << "Pls enter 10 integers:" << std::endl;
    for (unsigned int i = 0; i < LENGTH; i++)
    {
        std::cin >> inputArray[i];
    }

    reverse(inputArray, LENGTH);

    return inputArray;
}