#ifndef TIMER_H
#define TIMER_H

#include <concepts>
#include <ostream>

template <class T>
concept isIntegral = std::is_integral_v<T>;

// template <class T>
// concept isFloatingPoint = std::is_floating_point_v<T>;

class Itimer
{
public:
    virtual void nextClockCycle() = 0;
    // virtual ~Itimer() = default;
};

template <isIntegral T>
class Timer : public Itimer
{
public:
    T clockPeriod;

    void nextClockCycle()
    {
        std::cout << "next clock cycle" << std::endl;
    }

    Timer(T clockPeriod) : clockPeriod{clockPeriod}
    {
    }

private:
};

template <isIntegral T>
inline std::ostream &operator<<(std::ostream &os, const Timer<T> &timer)
{
    os << timer.count << " " << timer.clockPeriod;
    return os;
};

#endif
