#include <iostream>
#include "timer.hpp"
#include <thread>
#include "loadBuffer.hpp"
#include "fpMultReservationStation.hpp"
#include "fpAddReservationStation.hpp"
#include <memory>
#include "instructionFetch.hpp"

int main()
{
    std::cout << "Testing Timer" << std::endl;
    int64_t clockCount = 0;
    Timer<int64_t> timer(1000);

    auto loadBuffer = std::make_shared<LoadBuffer>();
    auto fpAddRS = std::make_shared<FPAddReservationStation>();
    auto fpMultRS = std::make_shared<FPMultReservationStation>();

    InstructionFetch<int> instructionFetch(loadBuffer, fpAddRS, fpMultRS);

    while (1)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        auto timeNow = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        std::cout << clockCount << " " << std::ctime(&timeNow) << std::endl;

        // Trigger All components nextClockCycle Method;
        instructionFetch.nextClockCycle();

        // Increse clock count
        clockCount++;
    }
    return 0;
}