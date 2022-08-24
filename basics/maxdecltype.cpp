#include <iostream>

template<typename T1, typename T2>
auto my_max(T1 a, T2 b) -> decltype(b < a ? a : b) {
    return b < a ? a : b;
}

int main() {
    std::cout << "int a = 42, double b = 54.2" << "\n";
    std::cout << "return 54.2" << "\n";
    std::cout << my_max(42, 54.2) << "\n";
    return 0;
}
