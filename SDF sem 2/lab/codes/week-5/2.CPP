#include <iostream>
using namespace std;
class Box
{
    int capacity;

public:
    Box() {}
    Box(double capacity)
    {
        this->capacity = capacity;
    }
    bool operator<(const Box &obj)
    {
        if (capacity < obj.capacity)
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
    Box b1(10);
    Box b2(5);

    if (b2 < b1)
    {
        cout << "Box 1 have more capacity then Box 2" << endl;
    }
    else
    {
        cout << "Box 2 have more capacity then Box 1" << endl;
    }

    return 0;
}
