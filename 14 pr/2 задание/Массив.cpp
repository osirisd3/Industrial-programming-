#include "Массив.h"

Array::Array(int size) : arraySize(size) {
    if (size <= 0) {
        throw std::invalid_argument("Размер массива должен быть положительным");
    }

    data = new int[size];
}

int& Array::operator[](int index) {
    if (index < 0 || index >= arraySize) {
        throw std::out_of_range("Индекс выходит за границы массива");
    }

    return data[index];
}

int Array::size() const {
    return arraySize;
}