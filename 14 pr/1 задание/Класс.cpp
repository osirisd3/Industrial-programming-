#include "Класс.h"

int MyClass::divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Деление на 0");
    }

    return a / b;
}