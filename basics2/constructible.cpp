#include <iostream>
#include <cassert>

class B {
    public:
        int a;
    public:
    B() = delete;
    B(int a_) : a(a_) {}
    
};

template<typename T>
class C {
    public:
        T a;
    public:
        C(T a_) : a{a_} {
         static_assert(std::is_default_constructible<T>::value, "Класс С требует элементы конструируемые по уполчанию");   
        }
};

int main() {
    B prov(10);
    C prov2(prov);

    return 0;
}
