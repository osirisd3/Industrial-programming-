#ifndef ARRAY_H
#define ARRAY_H

#include <stdexcept>

class Array {
public:
    Array(int size);
    int& operator[](int index);
    int size() const;

private:
    int* data;
    int arraySize;
};

#endif // ARRAY_H