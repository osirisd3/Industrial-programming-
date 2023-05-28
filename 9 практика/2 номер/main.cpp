#include "sort.h"
#include <iostream>

int main()
{
    int* intArray = new int[5]{ 5, 3, 1, 4, 2 };
    size_t intArraySize = 5;

    std::cout << "Before sorting: ";
    for (size_t i = 0; i < intArraySize; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    sort(intArray, intArraySize);

    std::cout << "After sorting: ";
    for (size_t i = 0; i < intArraySize; i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    delete[] intArray;

    std::string* stringArray = new std::string[4]{ "Delta", "Alpha", "Charlie", "Bravo" };
    size_t stringArraySize = 4;

    std::cout << "Before sorting: ";
    for (size_t i = 0; i < stringArraySize; i++)
        std::cout << stringArray[i] << " ";
    std::cout << std::endl;

    sort(stringArray, stringArraySize);

    std::cout << "After sorting: ";
    for (size_t i = 0; i < stringArraySize; i++)
        std::cout << stringArray[i] << " ";
    std::cout << std::endl;

    delete[] stringArray;

    return 0;
}