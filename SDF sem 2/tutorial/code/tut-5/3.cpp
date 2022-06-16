#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    bool operator<(const Distance &D2)
    {
        if (feet < D2.feet)
        {
            return true;
        }
        if (feet == D2.feet && inches < D2.inches)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Distance D1(10, 20);
    Distance D2(20, 40);
    if (D1 < D2)
    {
        cout << "D1 is smaller" << endl;
    }
    else
    {
        cout << "D2 is smaller" << endl;
    }
    return 0;
}
