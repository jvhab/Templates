#include <iostream>
#include <type_traits>


// Может случиться так, что возвращаемый тип является ссылочным, поскольку в некоторых условиях Т может быть ссылкой.
// std::decay<>, возвращает результирующий тип как члент type.
// Поскольку член type является типом, для доступа к нему нужно квалифицировать выражение с помощью ключевого слова typename 
template <typename T1, typename T2>
auto my_max(T1 a, T2 b) -> typename std::decay<decltype(a > b ? a : b)>::type {
    return a > b ? a : b;
}

int main() {
    std::cout << "a = 10, b = 3.5" << "\n";
    std::cout << "return 10 " << "\n";
    std::cout << my_max(10, 3.5) << "\n";
    return 0;
}
