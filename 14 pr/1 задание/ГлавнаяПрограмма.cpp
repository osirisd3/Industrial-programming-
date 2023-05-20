#include <iostream>
#include "Класс.h"

int main() {
    try {
        MyClass myObject;
        int result = myObject.divide(10, 0);
        std::cout << "Результат: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}