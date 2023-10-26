#include <string>

#ifndef TIME_H
#define TIME_H

class Time{
    public:
        explicit Time(int = 0, int = 0, int = 0 );

        void setTime(int, int, int)
        void setHour(int);
        void setMinute(int);
        void setSecond(int);
}