#include <iostream>
#include <vector>
#include <algorithm>

#include "add.h"


int main() {
    auto v = std::vector<int>{0, 1, 2, 3};
    add(v);

    std::for_each(v.begin(), v.end(), [](auto x) {
        std::cout << x << "\t";
    });
    std::cout << std::endl;
}