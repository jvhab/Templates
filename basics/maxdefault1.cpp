#include <type_traits>
#include <iostream>

template<typename T1, typename T2, typename RT = std::decay_t<decltype(true ? T2() : T1())>>
RT my_max(T1 a, T2 b) {
    return a < b ? b : a;
}

int main() {
    std::cout << "my_max(10, 20.2)" << "\n";
    std::cout << my_max(10, 20.2) << "\n";
}
