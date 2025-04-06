//
// Created by sophi on 4/5/2025.
//

#ifndef MYVECTORS_H
#define MYVECTORS_H

#include <iostream>
#include <vector>

class myvectors {
    std::vector<int> randomVector(size_t n);

    std::ostream& operator<<(std::ostream& lhs, const std::vector<int>& rhs);

    int findValue(const std::vector<int>& values, int x);

    void halve(std::vector<int>& values);

    std::vector<int> operator+(const std::vector<int>& lhs, const std::vector<int>& rhs);
};


#endif //MYVECTORS_H
