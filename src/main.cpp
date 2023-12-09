#include <iostream>
#include "timer.hpp"
#include <thread>

int main()
{
    std::cout << "Testing Timer" << std::endl;
    int64_t clockCount = 0;
    Timer<int64_t> timer(1000);
    while (1)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        auto timeNow = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        std::cout << clockCount << " " << std::ctime(&timeNow) << std::endl;
        clockCount++;
    }
    return 0;
}