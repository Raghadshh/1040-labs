#include "time.h"
#include <iostream>
using namespace std;

Time::Time() {
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int h, int mi, int sec) {
    hours = h;
    minutes = mi;
    seconds = sec;
}

void Time::setHour(int h) { hours = h; }
void Time::setMin(int mi) { minutes = mi; }
void Time::setSec(int sec) { seconds = sec; }

int Time::getHour() { return hours; }
int Time::getMin() { return minutes; }
int Time::getSec() { return seconds; }

void Time::display() {
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

Time Time::diff(Time start, Time end) {
    int h = end.hours - start.hours;
    int mi = end.minutes - start.minutes;
    int sec = end.seconds - start.seconds;

    if (sec < 0) {
        sec += 60;
        mi -= 1;
    }
    if (mi < 0) {
        mi += 60;
        h -= 1;
    }

    return Time(h, mi, sec);
}