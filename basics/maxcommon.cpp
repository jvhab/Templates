#include <iostream>
#include <type_traits>


// Common_type_t дает общий тип для двух и больше различных типов
template <typename T1, typename T2>
std::common_type_t<T1, T2> my_max(T1 a, T2 b) {
    return a > b ? a : b;
}

int main() {
    std::cout << "my_max(10, 20.3) = " << "\n";
    std::cout << my_max(10, 20.3) << "\n";
    return 0;
}
