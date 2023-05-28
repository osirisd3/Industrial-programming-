#ifndef SORT_H
#define SORT_H

#include <algorithm>

template<typename T>
void sort(T* array, size_t size)
{
    std::sort(array, array + size);
}

#endif // SORT_H