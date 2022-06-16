#include <iostream>
using namespace std;
class Time
{
    int hours;
    int minutes;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }

    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void displayTime()
    {
        cout << "H: " << hours << " M:" << minutes << endl;
    }
    Time operator++()
    {
        cout << "inside preincrement\n";
        ++minutes;
        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return *this;
    }

    Time operator++(int)
    {
        cout << "post increment\n";

        Time Temp(hours, minutes);
        ++minutes;
        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }

        return Temp;
    }
};

int main()
{
    Time T1(10, 60), T2(10, 40);
    Time T3;

    T3 = ++T1;
    T3.displayTime();
    ++T1;
    T1.displayTime();

    T3 = T2++;
    T3.displayTime();
    T2.displayTime();
    T2++;
    T2.displayTime();

    return 0;
}
