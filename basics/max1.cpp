#include <iostream>

template<typename T>
T my_max(T a, T b) {
    return a > b ? a : b;
}

int main() {
    std::cout << "int: " << my_max(5, 10) << "\n";
    std::cout << "double: " << my_max(32.4, 20.1) << "\n";
    return 0;
}
