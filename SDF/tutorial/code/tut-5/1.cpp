#include <iostream>
using namespace std;
class time
{
    int hr;
    int min;
    int sec;

public:
    time()
    {
        hr = min = sec = 0;
    }
    time(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    friend bool operator==(time &t1, time &t2);
};
bool operator==(time &t1, time &t2)
{
    if (t1.hr == t2.hr && t1.min == t2.min && t1.sec == t2.sec)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    time t1(10, 20, 30);
    time t2(9, 50, 40);
    if (t1 == t2)
    {
        cout << "Time are equal" << endl;
    }
    else
    {
        cout << "Time are not equal" << endl;
    }
    return 0;
}
