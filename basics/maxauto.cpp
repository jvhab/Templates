#include <iostream>

template<typename T1, typename T2>
auto my_max(T1 a, T2 b) {
    return b > a ? b : a;
}

int main() {
    std::cout << "int , double: " << my_max(10, 20.3) << "\n";
    return 0; 
}
