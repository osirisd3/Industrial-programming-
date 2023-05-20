#ifndef SET_CPP
#define SET_CPP

#include "Множество.h"

template<typename T>
bool Set<T>::contains(const T& element) {
    if (mySet.empty()) {
        throw std::runtime_error("Множество пусто");
    }

    return mySet.find(element) != mySet.end();
}

template<typename T>
void Set<T>::add(const T& element) {
    mySet.insert(element);
}

#endif // SET_CPP