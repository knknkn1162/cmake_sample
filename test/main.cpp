#include "hello.hpp"
#include "good_morning.hpp"
#include <cmath>
#include <iostream>

int main() {
    hello();
    good_morning();
    double result = sqrt(2.00);
    std::cout << result << std::endl;
}
