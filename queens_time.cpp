// 2019, 11/23, 7:40, by Queenie
// to imply with Time methods

#include "queens_time.h" // file name

Time::Time()
{
    hr = Min = 0;
}

Time::Time(int h, int m)
{
    hr = h;
    min = m;
}

void Time::AddMin(int m)
{
    min += m;
    hr += min / 60;
    min %= 60; //
}

void Time::AddHr(int h)
{
    hr += h;
}

// operators...

std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hr << "hrs," << t.min << "mins now.";
    return os;   
}


