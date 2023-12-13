#ifndef Instruction_FETCH_H
#define Instruction_FETCH_H

#include <queue>

// Forward Declarations of Coupled Components
class LoadBuffer;
class FPAddReservationStation;
class FPMultReservationStation;

template <typename T, typename Container = std::queue<T>>
class InstructionFetch : public Itimer
{
public:
    Container queue;

    std::shared_ptr<LoadBuffer> loadBuffer;
    std::shared_ptr<FPAddReservationStation> fpAddRS;
    std::shared_ptr<FPMultReservationStation> fpMultRS;

    InstructionFetch(std::shared_ptr<LoadBuffer> LoadBuffer, std::shared_ptr<FPAddReservationStation> fpAddRS, std::shared_ptr<FPMultReservationStation> fpMultRS)
        : loadBuffer{loadBuffer}, fpAddRS{fpAddRS}, fpMultRS{fpMultRS}
    {
    }

    void nextClockCycle()
    {
        if (queue.empty())
        {
            std::cout << "Instruction Queue is Empty" << std::endl;
            return;
        }
        auto instruction = queue.front();
        queue.pop();
        std::cout << "Get Instruction" << std::endl;
        // switch (expression)
        // {
        // case /* constant-expression */:
        //     /* code */
        //     break;
        // default:
        //     break;
        // }
    }

private:
};

#endif