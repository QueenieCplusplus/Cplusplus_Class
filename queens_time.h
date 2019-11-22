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

        //常數定義
        //...

        //朋友關鍵字僅適用於類別宣告的函數原型
        friend Time operator*(double m, const Time & t)
            { return t * m; }
        friend std::ostream & operator<<(std::ostream & os, const Time & t);
};
#endif

