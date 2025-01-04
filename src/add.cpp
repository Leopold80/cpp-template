#include "add.h"

void add(std::vector<int>& v) {
    std::transform(v.begin(), v.end(), v.begin(), [](auto x) {
        return x + 1; 
    });
}