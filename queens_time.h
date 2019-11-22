// 2019, 11/23, 7:30, by Queenie
// define Time class using C++ Header

#ifdef QUEENSTIME_H_
#define QUEENSTIME_H_
#include <iostream>

class Time 
{
    private:
        int hr;
        int min;

    public:
        Time();
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void ResetTime(int h = 0, int m = 0)     
};
#endif

