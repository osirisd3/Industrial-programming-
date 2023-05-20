#include <iostream>
#include "Множество.h"

int main() {
    try {
        Set<int> mySet;
        mySet.add(1);
        mySet.add(2);
        mySet.add(3);

        if (mySet.contains(2)) {
            std::cout << "Элемент найден" << std::endl;
        } else {
            std::cout << "Элемент не найден" << std::endl;
        }

        if (mySet.contains(4)) {
            std::cout << "Элемент найден" << std::endl;
        } else {
            std::cout << "Элемент не найден" << std::endl;
        }

        Set<int> emptySet;
        emptySet.contains(1);
    } catch (const std::exception& e) {
        std::cout << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}