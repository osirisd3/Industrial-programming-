#include "swap.h"
#include <iostream>

struct MyClass
{
    int value;

    MyClass(int val) : value(val) {}
};

int main()
{
    int x = 5;
    int y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    MyClass obj1(15);
    MyClass obj2(20);
    std::cout << "Before swap: obj1.value = " << obj1.value << ", obj2.value = " << obj2.value << std::endl;
    swap(obj1, obj2);
    std::cout << "After swap: obj1.value = " << obj1.value << ", obj2.value = " << obj2.value << std::endl;

    return 0;
}