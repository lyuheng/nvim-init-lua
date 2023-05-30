#include <iostream>
#include <numeric>
#include <vector>

class A {};

void func(int a) {
    std::cout << "123" << std::endl;
    std::cout << "123" << std::endl;
}

int main() {
    std::cout << "123" << std::endl;

    std::vector<int> vec = {1, 2, 3};

    for (auto i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }

    std::accumulate(vec.begin(), vec.end(), 0);
}
