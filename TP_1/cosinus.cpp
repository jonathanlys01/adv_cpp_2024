#include <math.h>
#include <iostream>

int main(int argc, char* argv[]) {
    double x = 3.14;
    double y = cos(x);
    std::cout << "cos(" << x << ") = " << y << std::endl;
    return 0;
}