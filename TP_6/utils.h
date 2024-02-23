# include <iostream>

template <typename T>
bool smallerThan(T a, T b){
    std::cout << "The type is " << typeid(T).name() << std::endl;
    return a < b;
}   