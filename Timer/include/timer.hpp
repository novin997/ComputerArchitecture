#ifndef TIMER_H
#define TIMER_H

#include <concepts>
#include <ostream>

template <class T>
concept isIntegral = std::is_integral_v<T>;

// template <class T>
// concept isFloatingPoint = std::is_floating_point_v<T>;

template <isIntegral T>
class Timer
{
public:
    T ticks = 0;
    T clockFrequency;

    Timer(T clockFrequency) : clockFrequency{clockFrequency}
    {
    }

private:
};

template <isIntegral T>
inline std::ostream &operator<<(std::ostream &os, const Timer<T> &timer)
{
    os << timer.ticks << " " << timer.clockFrequency;
    return os;
};

#endif
