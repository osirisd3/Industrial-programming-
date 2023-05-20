#include <iostream>
#include "Массив.h"
#include "Массив.cpp"

int main() {
    try {
        Array myArray(5);

        // Доступ к элементам массива
        myArray[0] = 1;
        myArray[1] = 2;
        myArray[2] = 3;
        myArray[3] = 4;
        myArray[4] = 5;

        // Обращение по неправильному индексу
        int value = myArray[6];
        std::cout << "Значение: " << value << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}