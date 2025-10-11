#ifndef TIME_H 
#define TIME_H

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();
    Time(int h, int mi, int sec);

    void setHour(int h);
    void setMin(int mi);
    void setSec(int sec);

    int getHour();
    int getMin();
    int getSec();

    void display();

    static Time diff(Time start, Time end);
};

#endif