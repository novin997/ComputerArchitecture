#include <iostream>
#include "timer.hpp"

int main()
{
    std::cout << "Testing Timer" << std::endl;
    Timer<long> timer(200);
    std::cout << timer << std::endl;

    return 0;
}