#ifndef SET_H
#define SET_H

#include <set>
#include <stdexcept>

template<typename T>
class Set {
public:
    bool contains(const T& element);
    void add(const T& element);

private:
    std::set<T> mySet;
};

#include "Множество.cpp"

#endif // SET_H