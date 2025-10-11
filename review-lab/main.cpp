#include <iostream>
#include "time.h"
using namespace std;

int main()
{
    int hh, mm, ss;
    int hhh, mmm, sss;

    cout << "Enter start time (hh mm ss): ";
    cin >> hh >> mm >> ss;
    cout << "Enter end time (hh mm ss): ";
    cin >> hhh >> mmm >> sss;

    Time start(hh, mm, ss);
    Time end(hhh, mmm, sss);

    cout << "Start: ";
    start.display();

    cout << "End: ";
    end.display();

    Time diff = Time::diff(start, end);
    cout << "Difference: ";
    diff.display();

    return 0;
}