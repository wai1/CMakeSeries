#include <iostream>
#include <concepts>  // C++ 20

template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a + b;
}

int main(){
    std::cout << "Hello from C++ 20 with CMake on Linux/Windows" << std::endl;
    std::cout << "The sum is: " << add(7, 3) << std::endl;
    return 0;
}